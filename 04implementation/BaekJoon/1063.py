# 8*8 체스판, 킹의 현재 위치 주어짐
# 말의 위치: A1(열,행)
# A~H(왼~오), 1~8(아래~위)
# 킹이나 돌이 체스판 범위 벗어나면 무시
# 돌과 같은 곳으로 이동할 때: 돌을 킹과 같은 이동방향으로 한 칸 이동
# Q.킹과 돌의 마지막 위치

# 킹 위치, 돌 위치, 이동 횟수
# (1 <= n <= 50), 열행
king, rock, n = input().split()
kr = int(king[1])
kc = int(ord(king[0]))-int(ord('A'))+1
rr = int(rock[1])
rc = int(ord(rock[0]))-int(ord('A'))+1

plans = []
# 킹의 이동 정보
for i in range(int(n)):
    plans.append(input())

# 이동 방향 벡터(우,좌,하,상,우상,좌상,우하,좌하)
dx = [0, 0, -1, 1, 1, 1, -1, -1]
dy = [1, -1, 0, 0, 1, -1, 1, -1]
steps = ['R', 'L', 'B', 'T', 'RT', 'LT', 'RB', 'LB']

for i in range(int(n)):
    for j in range(len(steps)):
        if plans[i] == steps[j]:
            nr = kr+dx[j]
            nc = kc+dy[j]
            if nr < 1 or nr > 8 or nc < 1 or nc > 8:
                continue
            if nr == rr and nc == rc:
                nr2 = rr+dx[j]
                nc2 = rc+dy[j]
                if nr2 < 1 or nr2 > 8 or nc2 < 1 or nc2 > 8:
                    continue
                rr, rc = nr2, nc2
            kr, kc = nr, nc


print(chr(kc + int(ord('A')) - 1) + str(kr))
print(chr(rc + int(ord('A')) - 1) + str(rr))
