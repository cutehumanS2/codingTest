# 반복적 구현
def factorial_iterative(n):
    result = 1
    for i in range(i, n+1):
        result *= i
    return result

# 재귀적 구현


def factorial_recursive(n):
    if n <= 1:  # 0! 또는 1!인 경우 => 종료 조건 명시
        return 1
    # n! = n * (n-1)! 그대로 구현
    return n*factorial_recursive(n-1)


print('반복적 구현: ', factorial_iterative(5))
print('재귀적 구현: ', factorial_recursive(5))

"""
재귀적 구현이 더 간결 
∵재귀적 구현할 때 점화식을 그대로 옮기기 때문에
"""
