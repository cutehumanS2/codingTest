#include <bits/stdc++.h>
using namespace std;

//이전에 계산된 결과 저장위한 DP테이블 초기화
long long d[100]; //0~99 까지의 인덱스

int main()
{
    d[1] = 1;
    d[2] = 1;
    int n = 50;

    //보텀업 다이나믹 프로그래밍_반복문으로 구현
    for (int i = 3; i <= n; i++) //3~50
    {
        //점화식
        d[i] = d[i - 1] + d[i - 2];
    }

    cout << d[n] << endl;

    return 0;
}
