#include <bits/stdc++.h>
using namespace std;

//DP 테이블 초기화 _최적의 해만 넣음
int d[100];
int n;
vector<int> arr;

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    //보텀업 => 반복문 이용
    d[0] = arr[0];
    d[1] = max(arr[0], arr[1]);
    for (int i = 2; i < n; i++)
    {
        d[i] = max(d[i - 1], d[i - 2] + arr[i]);
    }

    cout << d[n - 1] << endl;
    return 0;
}