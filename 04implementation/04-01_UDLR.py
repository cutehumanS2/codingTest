n = int(input())
plans = input().split()
x, y = 1, 1  # 초기 위치

# L, R, U, D 방향 벡터 정의
dx = [0, 0, -1, 1]
dy = [-1, 1, 0, 0]
move_types = ['L', 'R', 'U', 'D']

for plan in plans:
    for i in range(len(move_types)):
        if plan == move_types[i]:
            nx = x+dx[i]
            ny = y+dy[i]
        if nx < 1 or nx > n or ny < 1 or ny > n:
            continue  # 범위 넘어가면 무시
        x, y = nx, ny  # 이동 수행
print(x, y)
