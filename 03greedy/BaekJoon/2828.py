import sys
input = sys.stdin.readline

n, m = map(int, input().split())
j = int(input())
pos = []
for i in range(j):
    x = int(input())
    pos.append(x)

left = 1  # 바구니 초기 왼쪽 위치
right = left+(m-1)  # 왼쪽 + 바구니크기 - 1
result = 0

for i in pos:
    # left보다 작은 위치에 떨어질 경우
    if i < left:
        move = left-i
        left -= move
        right -= move
        result += move
    # right보다 큰 위치에 떨어질 경우
    if i > right:
        move = i-right
        left += move
        right += move
        result += move
    # 바구니의 left와 right 사이에 떨어질 경우
    if left <= i and i <= right:
        continue

print(result)
