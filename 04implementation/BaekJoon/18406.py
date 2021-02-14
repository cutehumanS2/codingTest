# <--럭키스트레이트-->
# 점수 N을 자릿수 기준으로 반으로 나누어
# 왼쪽 부분의 각 자릿수 합 = 오른쪽 부분 => 럭스 사용
# Q. n 주어졌을 때, 럭스 사용 여부 출력
# +) n의 자릿수는 항상 짝수

import sys
input = sys.stdin.readline
# 점수 n (10 <= n <= 99,999,999 단, n은 짝수)
n = list(int(input().split()))
mid = len(n)//2

left = 0
right = 0
for i in range(mid):
    left += int(n[i])

for i in range(mid, len(n)):
    right += int(n[i])

if left == right:
    print('LUCKY')
else:
    print('READY')
