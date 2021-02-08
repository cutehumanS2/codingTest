# N개의 봉우리 마다 1명의 활잡이
# 자신보다 낮은 봉우리 적만 처치, 자신보다 높 만나면 포기
# 봉우리 높이 모두 다르며, 오른쪽으로만 전진o
# Q. 최고의 활잡이는 최대 몇명의 적 처치?
n = int(input())
heights = list(map(int, input().split()))

result = 0
for i in range(n):
    count = 0
    for j in range(i+1, n):
        if heights[i] < heights[j]:
            break
        count += 1
    result = max(result, count)

print(result)
