#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer;
    for(int i=0;i<n;i++)    answer.push_back(vector<int>(n, 0));
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};
    int direction = 0;
    int x=0, y=0;
    
    for(int i=1;i<=n*n;++i)
    {
        answer[x][y] = i;
        int nx = x+dx[direction];
        int ny = y+dy[direction];
        
        if(nx < 0 || nx>=n || ny<0 || ny>=n || answer[nx][ny] != 0)
        {
            direction = (direction +1)%4;
            nx = x + dx[direction];
            ny = y + dy[direction];
        }
        x = nx;
        y = ny;
    }
    
    
    
    return answer;
}