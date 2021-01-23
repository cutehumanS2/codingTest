#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> v;

bool compare(int a, int b)
{
    return a > b; //내림차순
}

int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    //기본 정렬 라이브러리 이용 내림차순 정렬
    sort(v.begin(), v.end(), compare);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << ' ';
    }
}