#include <iostream>
#include <queue>

using namespace std;
int dx[8] = {-2, -1, 1, 2, 2, 1, -1, -2};
int dy[8] = {1, 2, 2, 1, -1, -2, -2, -1};

bool isInside(int x, int y, int leng)
{
	if (x >= 0 && y >= 0 && x < leng && y < leng)
		return true;
	else
		return false;
}

int BFS_in_point(int* chess, int ch_leng, int* point)
{
    bool check[ch_leng][ch_leng];
    int d[ch_leng][ch_leng];
    queue<pair<int, int>> q;
    
    int x, y;

    check[chess[0]][chess[1]] = true;
    d[chess[0]][chess[1]] = 0;
    q.push(make_pair(chess[0], chess[1]));
    
    while(!q.empty())
    {
        x = q.front().first;
        y = q.front().second;
        q.pop();

        for(int i=0;i<8;i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (isInside(nx, ny, ch_leng))
            {
                if(check[nx][ny] == false)
                {
                    q.push(make_pair(nx, ny));
                    check[nx][ny] = true;
                    d[nx][ny] = d[x][y] + 1;
                }
            }
        }

    }

    return d[point[0]][point[1]];
}

int main()
{
    int chess_len;
    int chess[2], point[2];

    cin >> chess_len;
    cin >> chess[0] >> chess[1];
    cin >> point[0] >> point[1];

    cout << BFS_in_point(chess, chess_len, point) << endl;

    return 0;
}