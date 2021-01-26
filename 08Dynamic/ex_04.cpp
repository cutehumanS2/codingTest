#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> arr;

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    //DP 테이블 초기화
    vector<int> d(m + 1, 10001); //m+1개 10001로 초기화

    //보텀업 => 반복문 사용
    d[0] = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = arr[i]; j <= m; j++)
        {
            //i-k원 만드는 방법 존재하는 경우
            if (d[j - arr[i]] != 10001)
            {
                d[j] = min(d[j], d[j - arr[i]] + 1);
            }
        }
    }

    if (d[m] == 10001) //M원 생성 불가능한 경우
        cout << -1 << endl;
    else
        cout << d[m] << end;

    return 0;
}