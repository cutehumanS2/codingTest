#include <bits/stdc++.h>
using namespace std;

//메모제이션 위한 배열 초기화
long long d[100]; //0~99까지의 인덱스

//탑다운 다이나믹 프로그래밍_재귀함수로 구현
long long fibo(int x)
{
    if (x == 1 || x == 2)
        return 1;

    //전에 계산한 적 있는 경우
    if (d[x] != 0)
        return d[x];

    //피보나치 점화식
    d[x] = fibo(x - 1) + fibo(x - 2);
    return d[x];
}

int main()
{
    cout << fibo(50) << endl;
    return 0;
}