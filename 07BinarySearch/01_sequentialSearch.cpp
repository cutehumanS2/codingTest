#include <bits/stdc++.h>
using namespace std;

nt sequantialSearch(int n, string target, vector<string> arr)
{
    // 각 원소를 하나씩 확인하며
    for (int i = 0; i < n; i++)
    {
        // 현재의 원소가 찾고자 하는 원소와 동일한 경우
        if (arr[i] == target)
        {
            return i + 1; // 현재의 위치 반환 (인덱스는 0부터 시작하므로 1 더하기)
        }
    }
    return -1; // 원소를 찾지 못한 경우 -1 반환
}

int n;         // 원소의 개수
string target; // 찾을 문자열
vector<string> arr;

int main()
{
    cout << "생성할 원소 개수와 찾을 문자열을 입력하세요.(공백으로 구분)" << endl;
    cin >> n >> target;

    cout << "앞서 적은 원소 개수만큼 문자열을 입력하세요.(공백으로 구분)" << endl;
    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        arr.push_back(x);
    }

    cout << sequantialSearch(n, target, arr) << endl;
    return 0;
}