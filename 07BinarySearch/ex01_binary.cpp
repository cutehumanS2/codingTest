#include <bits/stdc++.h>
using namespace std;

int bianrySearch(vector<int> &arr, int target, int start, int end)
{
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] > target)
            end = mid - 1;
        else
            start = mid + 1;
    }
    return -1;
}

//가게의 부품 개수, 손님이 확인 요청한 부품 개수
int n, m;
//가게에 있는 전체 부품 번호
vector<int> arr;
//손님 요청 부품 번호
vector<int> targets;

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    //이진 탐색위해 사전에 정렬 수행
    sort(arr.begin(), arr.end());

    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        targets.push_back(x);
    }

    //손님이 요청한 부품 번호 확인
    for (int i = 0; i < m; i++)
    {
        int result = bianrySearch(arr, targets[i], 0, n - 1);
        if (result != -1)
        {
            cout << "yes" << ' ';
        }
        else
        {
            cout << "no" << ' ';
        }
    }

    return 0;
}
