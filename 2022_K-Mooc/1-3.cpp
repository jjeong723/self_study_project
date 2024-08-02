#include<iostream>
#include<stack>

using namespace std;

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

bool isInside(int x, int y, int leng)
{
	if (x >= 0 && y >= 0 && x < leng && y < leng)
		return true;
	else
		return false;
}

int* First_point(int** arr, int N)
{
    int *a = new int[2];

    a[0]=-1; a[1]=-1;

    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
            if(arr[i][j] == 1)
            {
                a[0] = i;
                a[1] = j;
                break;
            }
        if(a[0] != -1) break;  
    }

    return a;
}

int* DFS(int leng)
{
    stack<pair<int, int>> s;
    int * FP = new int[2];
    int * result = new int[2];
    int cluster_count=0;
    int max_num=0, num;
    int x, y;
    int * arr[leng];
    for (int i=0;i<leng;i++)
        arr[i] = new int[leng];
    
    for(int i=0;i<leng;i++)
        for(int j=0;j<leng;j++) cin >> arr[j][i];

    while(1)
    {
        FP = First_point(arr, leng);
        if(FP[0]==-1)
        {
            result[0] = cluster_count;
            result[1] = max_num;
            return result;
        }else   cluster_count++;

        s.push(make_pair(FP[0], FP[1]));
        arr[FP[0]][FP[1]] = 0;
        
        num = 1;
        while(!s.empty())
        {
            x = s.top().first;
            y = s.top().second;
            s.pop();

            for(int i=0;i<4;i++)
            {
                int nx = x + dx[i];
                int ny = y + dy[i];
                
                if (isInside(nx, ny, leng))
                {
                    if(arr[nx][ny] == 1)
                    {
                        s.push(make_pair(nx, ny));
                        arr[nx][ny] = 0;
                        num++;
                    }
                }
            }
        }
        if (max_num < num)  max_num = num;
    }
}

int main()
{
    int N;
    cin >> N;

    int* num = new int[2];

    num = DFS(N);

    cout << num[0] <<" "<< num[1] << endl;

    return 0;
}