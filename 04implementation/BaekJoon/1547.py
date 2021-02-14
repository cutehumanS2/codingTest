# <--공-->
# Q. 컵의 위치 m번 바꾼 후 공이 들어있는 컵의 번호

# 컵의 위치를 바꾼 횟수(1 <= m <= 50)
import sys
input = sys.stdin.readline

m = int(input())
ball = 1

for _ in range(m):
    # x번 컵과 y컵의 위치 서로 바꿈
    # x,y<=3, x=y일수도 o
    x, y = map(int, input().split())
    if ball == x:
        ball = y
    elif ball == y:
        ball = x

print(ball)
