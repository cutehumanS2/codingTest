#include <bits/stdc++.h>
using namespace std;

//DP테이블 초기화
int d[1001];
int n;

int main()
{
    cin >> n;

    //보텀업 => 반복문 이용
    d[1] = 1;
    d[2] = 3;
    for (int i = 3; i <= n; i++)
    {
        //점화식
        d[i] = (d[i - 1] + d[i - 2] * 2) % 796796;
    }

    cout << d[n] << endl;
    return 0;
}