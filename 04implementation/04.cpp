#include <bits/stdc++.h>
using namespace std;

int n, m, x, y, dir;

//방문 위치 저장위한 맵 _0:방문 안 함 1: 방문 함
int d[50][50];
//전체 맵
int arr[50][50];

//북, 동 , 남, 서 방향 벡터 정의
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

//왼쪽으로 회전 ~그림 그려보면 왜 -1, 3인지 알 수 있음
void turn_left()
{
    dir -= 1;
    if (dir == -1)
        dir = 3;
}

int main()
{
    cin >> n >> m;
    cin >> x >> y >> dir;
    //현재 좌표 방문 처리
    d[x][y] = 1;

    //전체 맵 정보 입력 받음
    for (int i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            int x;
            cint >> x;
            arr[i][j] = x;
        }
    }

    //시뮬레이션 시작
    int cnt = 1;
    int turn_time = 0;
    while (true)
    {
        turn_left();
        int nx = x + dx[dir];
        int ny = y + dy[dir];
        //회전한 이후 정면에 방문할 수 있는 칸 있으면 전진
        if (d[nx][ny] == 0 && arr[nx][ny] == 0)
        {
            d[nx][ny] = 1;
            x = nx;
            y = ny;
            cnt += 1;
            turn_time = 0;
            continue;
        }
        //회전한 이후 정면 방문 불가능할 경우(가봤거나 바다)
        else
            turn_time += 1;
        //네 방향 모두 갈 수 없으면
        if (turn_time == 4)
        {
            //원상 복구
            nx = x - dx[dir];
            ny = y - dy[dir];
            //뒤로 갈 수 있으면 뒤로 이동
            if (arr[nx][ny] == 0)
            {
                x = nx;
                y = ny;
            }
            //뒤가 바다로 막힌 경우 이동 멈춤
            else
                break;
            turn_time = 0;
        }
    }

    cout << cnt << endl;
    return 0;
}