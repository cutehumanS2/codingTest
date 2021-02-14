# <미로 탈출>
# N*M크기의 미로 ~ 0: 괴물o / 1: 괴물x
# 초기 위치(1,1), 출구(n,m)
# Q.미로 탈출 위한 최소 이동 칸의 개수 (시작, 마지막 칸 포함)
# "최소 이동 칸의 개수" ~> 가까운 노드부터 탐색
#                     => BFS로 구현 가능
# : (1,1)지점부터 모든 노드 값을 거리 정보로 넣음
# : 특정한 노드를 방문하면 이전 노드 거리+1 해서 리스트에 넣음
from collections import deque

n, m = map(int, input().split())
graph = []
for i in range(n):
    graph.append(list(map(int, input())))

# 이동 방향 벡터(상하좌우)
dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]


def bfs(x, y):
    queue = deque()
    queue.append((x, y))

    while True:
        x, y = queue.popleft()
        # 현재 위치에서 상하좌우 확인
        for i in range(4):
            nx = x+dx[i]
            ny = y+dy[i]
            # 미로 범위 벗어난 경우 무시
            if nx < 0 or nx >= n or ny < 0 or ny >= m:
                continue
            # 괴물인 경우 무시
            if graph[nx][ny] == 0:
                continue
            if graph[nx][ny] == 1:
                graph[nx][ny] = graph[x][y]+1  # 이전 노드 거리+1 해서
                queue.append((nx, ny))         # 리스트에 넣음
    # 출구까지의 최단 거리 반환
    return graph[n-1][m-1]


print(bfs(0, 0))
