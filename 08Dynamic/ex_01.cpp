#include <bits/stdc++.h>
using namespace std;

int d[30001]; //1~30000 ~~ c++에서는 0으로 초기화됨
int x;

int main()
{
    cin >> x;

    //보텀업 => 반복문으로 구현
    //1인 경우는 자신이 1이므로 연산 필요 x
    //-> 0으로 초기화되어 있다고 가정
    for (int i = 2; i <= x; i++)
    {
        //현재의 수 - 1
        d[i] = d[i - 1] + 1;
        //현재의 수 / 2
        if (i % 2 == 0)
            d[i] = min(d[i], d[i / 2] + 1);
        //현재의 수 / 3
        if (i % 3 == 0)
            d[i] = min(d[i], d[i / 3] + 1);
        //현재의 수 / 5
        if (i % 5 == 0)
            d[i] = min(d[i], d[i / 5] + 1);
    }
    cout << d[x] << endl;
}