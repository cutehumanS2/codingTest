#include <bits/stdc++.h>
using namespace std;

//전역변수로 선언
int n, m, k;
vector<int> v;

int main(){
    cin >> n >> m >> k;

    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());
    int first = v[n-1];
    int second = v[n-2];

    //(k+1) 수열 길이
    //(m / (k+1)) 수열 반복 횟수
    //(m / (k+1))*k 가장 큰 수 등장 횟수
    int cnt = (m / (k+1))*k;
    cnt += m % (k+1); //나누어 떨어지지 않는 경우

    int result = 0;
    result += cnt*first;
    result += (m-cnt)*second;
}