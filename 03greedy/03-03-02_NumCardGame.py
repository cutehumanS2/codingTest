# 이중 반복문 이용

# 행 n, 열 m 공백 구분 입력
# 1 <= n, m <= 100
n, m = map(int, input().split())

result = 0
for i in range(n):
    data = list(map(int, input().split()))
    min_value = 10001  # 범위 벗어나는 숫자로 그냥 설정
    for j in data:
        # 현재 줄에서의 최솟값 뽑기
        min_value = min(min_value, j)
    # 최솟값들 중 최댓값
    result = max(result, min_value)

print(result)
