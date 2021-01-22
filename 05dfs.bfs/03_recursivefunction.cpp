#include <bits/stdc++.h>
using namespace std;

void recursiveFunction()
{
    cout << "재귀 함수 호출" << endl;
    recursiveFunction();
}

int main()
{
    recursiveFunction();
    return 0;
}