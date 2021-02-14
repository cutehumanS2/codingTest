# <음료수 얼려 먹기>
# 가로*세로 N*M크기의 얼음틀, 구멍0 칸막이1
# 구멍이 뚫려있는 부분 끼리 상하좌우 연결됨
# Q. 생성되는 아이스크림의 개수는?
#: 연결된 묶음을 찾아주도록 작성 => DFS로 해결 가능
# 1. 특정한 지점 주변 상하좌우 살펴본 뒤, 값이 0이거나 방문x 곳 ~> 방문
# 2. 방문한 지점에서 상하좌우 살펴보며 방문 다시 진행
#   ~> 연결된 모든 지점 방문 가능함
# 3. 1~2 과정을 모든 노드에 반복하며 방문하지 않은 지점의 수 셈

#세로n, 가로m (1 <= n,m <= 1000)
n, m = map(int, input().split())
graph = []
for i in range(n):
    graph.append(list(map(int, input())))


def dfs(x, y):
    # 범위 벗어난 경우 종료
    if x <= -1 or x >= n or y <= -1 or y >= m:
        return False
    # 현재 노드를 아직 방문하지 않은 경우
    if graph[x][y] == 0:
        graph[x][y] = 1  # 방문 처리
        # 상좌하우 모두 탐색~재귀적 호출
        dfs(x-1, y)  # 묶음 당 처리 한 번 가능
        dfs(x, y-1)  #: ex) (0,0)탐색할 때 연결된 노드 모두 방문처리
        dfs(x-1, y)  # 함으로써 (0,1)탐색할 때에는 result+=1 안 함
        dfs(x, y+1)
        return True
    return False


result = 0
for i in range(n):
    for j in range(m):
        if dfs(i, j) == True:
            result += 1

print(result)
