#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> a, b;

bool compare(int x, int y)
{
    return x > y; //내림차순
}

int main()
{
    cin >> n >> k;

    //배열 a
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }

    //배열 b
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        b.push_back(x);
    }

    sort(a.begin(), a.end());          //오름차순
    sort(b.begin(), b.end(), compare); //내림차순

    // 첫 번째 인덱스부터 확인하며, 두 배열의 원소를 최대 K번 비교
    for (int i = 0; i < k; i++)
    {
        if (a[i] < b[i])
            swap(a[i], b[i]);
        // A의 원소가 B의 원소보다 크거나 같 ~>반복문 탈출
        else
            break;
    }

    // 배열 A의 모든 원소의 합을 출력
    long long result = 0;
    //모든 원소가 천만보다 작은 자연수이므로
    //넉넉하게 long long
    //100,000 * 10,000,000 = 1,000,000,000,000 (?)
    for (int i = 0; i < n; i++)
    {
        result += a[i];
    }
    cout << result << endl;
    return 0;
}