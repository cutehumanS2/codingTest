#include <bits/stdc++.h>
using namepace std;

int h, cnt;

//3 포함 여부 확인 함수
bool check(int h, int m, int s)
{
    //h의 일의 자리 수, m의 십의 자리 수, m의 일의 자리 수
    //h는 23이 최대이므로 십의 자리 수 확인x
    if (h % 10 == 3 || m / 10 == 3 || m % 10 == 3 || s / 10 == 3 || s % 10 == 3)
    {
        return true;
    }
    return false;
}

int main()
{
    cin >> h;
    for (int i = 0; i <= h; i++)
    {
        for (int j = 0; j < 60; j++)
        {
            for (int k = 0; k <= 60; k++)
            {
                if (check(i, j, k))
                    cnt++;
            }
        }
    }

    cout << cnt << endl;
    return 0;
}