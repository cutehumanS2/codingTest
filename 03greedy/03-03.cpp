#include <bits/stdc++.h>
using namespace std;

int n, m;
int result;

int main(){
    cin >> n >> m;

    for(int i=0; i<n; i++){
        int min_value = 10001; //일부러 범위 밖 값 설정함(아무 상관 없는 수)
        for(int j=0; j<m; j++){
            int x; 
            cin >> x;
            min_value = min(min_value, x);
        }
        result = max(result, min_value);
    }

    cout << result << endl;
}