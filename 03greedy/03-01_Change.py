# 그리디 이용 거스름돈
n = 1260  # 거슬러 줄 돈
count = 0  # 동전 최소 개수

# 큰 단위의 동전부터
coin_types = [500, 100, 50, 10]

# 동전 종류만큼 반복 수행
# 동전 종류: K ~> 시간복잡도 O(K)
for coin in coin_types:
    count += n // coin
    n %= coin

print(count)

# 동전의 큰 단위가 항상 작은 단위의 배수
# ∵작은 단위를 종합하여 다른 해 나올 수 없음

# 동전 단위가 서로 배수 형태가 x
# ~그리디x 다이나믹 O
