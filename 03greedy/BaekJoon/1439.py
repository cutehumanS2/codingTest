import sys
input = sys.stdin.readline

data = input()
zero = 0  # 전부 0으로 바꾸는 경우
one = 0  # 전부 1로 바꾸는 경우

# 첫 번째 원소에 대해 처리
if data[0] == '1':
    zero += 1
else:
    one += 1

# 다음 수와 비교하므로 data 길이 -1
for i in range(len(data)-1):
    if data[i] != data[i+1]:
        # 다음 수에서 1로 바뀌는 경우
        if data[i+1] == '1':
            zero += 1
        else:  # 0으로 바뀌는 경우
            one += 1
# 전부 0으로 바꾸는 경우 vs 1로 바꾸는 경우
# 중 작은 것으로
print(min(zero, one))
