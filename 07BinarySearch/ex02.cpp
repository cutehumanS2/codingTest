#include <bits/stdc++.h>
using namespace std;

//떡의 개수와 요청한 떡의 길이
int n, m;
//떡의 개별 높이
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

    int start = 0;
    int end = 1e9; //가능한 한 가장 큰 값(10억)

    int result = 0;
    while (start <= end)
    {
        //각 떡의 높이 최대 10억까지 가므로 long long int 사용
        long long int total = 0;

        int mid = (start + end) / 2;
        for (int i = 0; i < n; i++)
        {
            //잘랐을 때의 떡의 양
            if (arr[i] > mid)
                total += arr[i] - mid;
        }

        //떡의 양이 부족한 경우(절단기 높이 값 줄임)
        if (total < m)
            end = mid - 1;
        else //떡의 양이 충분한 경우(높이 값 키움)
        {
            result = mid; //충분하므로 일단 기록
            start = mid + 1;
        }
    }
    cout << result << endl;
    return 0;
}
