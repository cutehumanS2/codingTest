import sys
input = sys.stdin.readline

# 입력이 여러 개의 테스트 ~ 반복
while Ture:
    l, p, v = map(int, input().split())

    # l+p+v == 0으로 대체 가능
    if l == 0 and p == 0 and n == 0:
        break

    result = 0
    result += ((v//p)*l)

    # (*)연속하는 p일 중, 'l일 동안만' 사용 가능
    # 나머지(v%p)가 사용할 수 있는 기간(l)보다 큰 경우
    """
    if (v % p) > l:
        result += l
    else:
        result += (v % p)
    """
    result += min(v % p, l)

    print("Case %d: %d" % (i+1), result)
    i += 1
