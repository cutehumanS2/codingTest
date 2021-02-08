# k개의 로프 사용 ~ 중량 w인 물체 들어올리면
# 모든 로프에는 w/k만큼 중량 걸림
# Q. 들어올릴 수 있는 물체의 최대 중량
# 모든 로프 사용할 필요x
import sys
input = sys.stdin.readline

n = int(input())
rope = []
for _ in range(n):
    rope.append(int(input()))

rope.sort(reverse=True)

max_value = 0
for i in range(n):
    max_value = max(max_value, rope[i]*(i+1))

print(max_value)
