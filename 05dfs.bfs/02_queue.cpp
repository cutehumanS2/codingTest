#include <bits/stdc++.h>
using namespace std;

queue<int> q;

int main()
{
    q.push(5);
    q.push(2);
    q.push(3);
    q.push(7);
    q.pop();
    q.push(1);
    q.push(4);
    q.pop();

    //스택의 최상단부터 출력
    while (!s.empty())
    {
        cout << q.front() << ' ';
        s.pop();
    }
    return 0;
}