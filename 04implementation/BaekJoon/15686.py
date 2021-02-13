# --완전 탐색--
# 도시에 있는 치킨집 중 M개 고르고,  => 조합 이용
# M개를 어떻게 골라야 도시의 치킨 거리가 최소가 될지
from itertools import combinations

n, m = (map(int, input().split()))
chicken, house = [], []

for r in range(n):  # n개의 줄에 도시의 정보 입력 받음
    data = list(map(int, input().split()))
    for c in range(n):
        if data[c] == 1:
            house.append((r, c))
        elif data[c] == 2:
            chicken.append((r, c))

# 모든 치킨집 중 m개 뽑는 조합 계산
candidiates = list(combinations(chicken, m))


def get_sum(candidate):  # 도시의 치킨 거리(=치킨 거리의 합) 계산 함수
    result = 0
    for hx, hy in house:
        # 가장 가까운 치킨집 찾기
        tmp = 1e9
        for cx, cy in candidate:
            tmp = min(tmp, abs(hx-cx)+abs(hy-cy))
        result += tmp
    return result


# 도시의 치킨거리 최솟값 구하기
result = 1e9
for candidiate in candidiates:
    result = min(result, get_sum(candidate))

print(result)
