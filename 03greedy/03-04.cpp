#include <bits/stdc++.h>
using namespace std;

int n, k;
int result;

int main(){
    cin >> n >> k;

    while(true){
        //k로 나누어 떨어지는 가장 가까운 수를 일단 target으로 지정
        int target = (n / k) * k;
        result += (n-target); //연산 횟수(여기서는 -1한 횟수)
        n = target;

        if(n < k) break;

        result += 1; //연산 횟수(여기서는 k로 나눈 횟수)
        n /= k;
    }

    //마지막 남은 수에 대해 -1 해주기
    result += (n-1);
    cout << result << endl;
}