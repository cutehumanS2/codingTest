#include <bits/stdc++.h>
using namespace std;

int n;
int x = 1, y = 1; //시작 좌표
string plan;

//L, R, U< D에 따른 이동 방향 벡터
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};
char moveTypes[4] = {'L', 'R', 'U', 'D'};

int main()
{
    cin >> n;     //정수 하나를 입력받고
    cin.ignore(); //문자열 입력받을 경우, 버퍼 비워줘야 함
    getline(cin, plans);

    /*이동 계획 하나씩 확인*/
    for (int i = 0; i < plans.size(); i++)
    {
        char plan = plans[i];
        //이동 후 좌표 구하기
        int nx = -1, ny = -1; //c++에서는 먼저 초기화해줘야 함
        for (int j = 0; j < 4; j++)
        {
            if (plan == moveTypes[j])
            {
                nx = x + dx[j];
                ny = y + dy[j];
            }
        }

        //공간 벗어나는 경우 무시
        if (nx < 1 || ny < 1 || nx > n || ny > n)
            continue;
        //이동 수행
        x = nx;
        y = ny;
    }
    cout << x << '' << y << endl;
    return 0;
}