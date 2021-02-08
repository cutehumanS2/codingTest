n = int(input())
data = list(map(int, input().split()))

count = 0
l = 0

for i in data:
    if i == 'S':
        count += 1
    elif i == 'L':
        l += 1
        if l == 2:
            count += 1
            l = 0

print(min(count, n))
# 사람 수(n)보다 답이 커질 수 없음
