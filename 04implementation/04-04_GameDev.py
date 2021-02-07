n, m = map(int, input().split())
# 방문 위치 저장 위한 맵 생성, 0으로 초기화
# 리스트 컴프리헨션(2차원 리스트에 효율적)
d = [[0]*m for _ in range(n)]
x, y, dir = map(int, input().split())
# 현재 위치 방문 처리
d[x][y] = 1

# 전체 맵 정보
array = []
for i in range(n):
    array.append(list(map(int, input().split())))

# 북동남서 방향 벡터 정의
dx = [-1, 0, 1, 0]
dy = [0, 1, 0, -1]

# 왼쪽으로 회전


def trun_left():
    # 함수 밖에서 선언된 전역 변수
    global dir
    dir -= 1  # 그림 그려보면 납득
    if dir == -1:
        dir = 3


# 시뮬 시작
count = 1
turn_time = 0
while True:
    turn_left()
    nx = x+dx[dir]
    ny = y+dy[dir]
    # 회전한 후 정면에 가보지x 칸 o -> 이동
    if d[nx][ny] == 0 and array[nx][ny] == 0:
        d[nx][ny] == 1
        x, y = nx, ny
        count += 1
        turn_time = 0
        continue  # 밑 코드는 건너뛰고 다시 반복문 처음으로
    else:  # 회전만 하고 반복문 처음으로
        turn_time += 1
    # 네 방향 모두 갈 수 x 경우
    if turn_time == 4:
        # 1칸 뒤로 갔을 때의 좌표(원상복구)_바라보는 방향은 유지
        nx = x-dx[dir]
        ny = y-dy[dir]
        # 뒤로 갈 수 있을 때 이동
        if array[nx][ny] == 0:
            x, y = nx, ny
        # 뒤가 바다이면 움직임 종료
        else:
            break
        turn_time = 0
print(count)
