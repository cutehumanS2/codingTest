n = int(input())
result = 0

while True:
    # 가장 큰 수인 5로 먼저 꽉 채워봄
    if n % 5 == 0:
        result += n//5
        print(result)
        break

    # 5로 꽉 채우지 못할 경우 3으로 하나씩 채워줌
    # (5로 채울 수 있을 때까지)
    n -= 3
    result += 1

    # 계속 3으로 빼다가 n이 음수가 되면
    # 정확하게 n을 만들 수 없으므로 -1 출력
    if n < 0:
        print(-1)
        break

"""
n=int(input())
result=0

while n!=0:
    if n<0:
        result=-1
        break
    if n%5 == 0:
        result += n//5
        n%=5
    else:
        n-=3
        result+=1
print(result)
"""
