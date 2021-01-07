#include <bits/stdc++.h>
using namespace std;

string inputData;

//이동 가능한 방향 벡터 정의
int dx[] = {-2, -1, 1, 2, 2, 1, -1, -2};
int dy[] = {-1, -2, -2, -1, 1, 2, 2, 1};

int main()
{
    cin >> inputData;
    //아스키코드 값을 이용하여 현재 나이트의 위치 계산
    int row = inputData[1] - '0';
    int col = inputData[0] - 'a' + 1;

    //8가지 방향에 대해 이동 가능 여부 확인
    int result = 0; //경우의 수
    for (int i = 0; i < 8; i++)
    {
        //이동하고자 하는 위치 확인
        int nextRow = row + dx[i];
        int nextCol = col + dy[i];
        //해당 위치로 이동 가능하면 카운트 증가
        if (nextRow >= 1 && nextRow <= 8 && nextCol >= 1 && nextCol <= 8)
        {
            result += 1;
        }
    }

    cout << result << endl;
    return 0;
}
