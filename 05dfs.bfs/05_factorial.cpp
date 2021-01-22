#include <bits/stdc++.h>
using namespace std;

//1. 반복적 구현
int factorialIterative(int n)
{
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

//2. 재귀적 구현
int factorialRecursive(int n)
{
    //n이 1이하인 경우 1 반환
    if (n <= 1)
        return 1;
    //n! = n(n-1)! 그대로 작성
    return n * factorialRecursive(n - 1);
}

int main()
{
    cout << "반복적 구현: " << factorialIterative(4) << endl;
    cout << "재귀적 구현: " << factorialRecursive(4) << endl;
    return 0;
}