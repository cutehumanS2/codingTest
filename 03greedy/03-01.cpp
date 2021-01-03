//필요한 온갖 라이브러리? 사용 가능, VS studio에서 사용하려면 뭐 설치해야 함
#include <bits/stdc++.h>
using namespace std;

int n = 1260;
int cnt;

int coin_types[4] = {500, 100, 50, 10};

int main(){
    for(int i=0; i<4; i++){
        cnt += n / coin_types[i];
        c %= coin_types[i];
    }
    cout<<cnt<<endl;
}