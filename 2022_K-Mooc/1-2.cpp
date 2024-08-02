#include<iostream>
#include<queue>

using namespace std;

int d[100001];
bool check[100001];

bool isInside(int x)
{
	if (x >= 0 &&x < 100000)
		return true;
	else
		return false;
}

void BFS(int x)
{
    queue<int> q;

    check[x] = true;
    d[x] = 0;
    q.push(x);

    while(!q.empty())
    {
        x = q.front();
        q.pop();
        if(isInside(x-1))
            if (check[x-1]==false)
            {
                q.push(x-1);
                check[x-1] = true;
                d[x-1] = d[x] + 1;
            }
        if(isInside(x+1))
            if (check[x+1]==false)
            {
                q.push(x+1);
                check[x+1] = true;
                d[x+1] = d[x] + 1;
            }
        if(isInside(2*x))
            if (check[2*x]==false)
            {
                q.push(2*x);
                check[2*x] = true;
                d[2*x] = d[x] + 1;
            }
    }
}

int main()
{
    int x, D;
    cin >> x >> D;

    BFS(x);

    cout << d[D] << endl;

    return 0;
}