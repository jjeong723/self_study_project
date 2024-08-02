#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> node;

int get_Parent(int x)
{
    if(node[x] == x)    return x;

    return node[x] = get_Parent(node[x]);
}

bool cycle_check(int a, int b)
{
    a = get_Parent(a);
    b = get_Parent(b);

    if(a==b)    return true;
    else    return false;
}

void Union_Parent(int a, int b)
{
    a = get_Parent(a);
    b = get_Parent(b);

    if(a>b) node[b] = a;
    else node[a] = b;
}

bool Cost_Compare(vector<int> a, vector<int> b)
{
    return a[2] < b[2];
}

int Solution(int n, vector<vector<int>> costs)
{
    int answer = 0;

    sort(costs.begin(), costs.end(), Cost_Compare);

    for(int i=0;i<n;i++)
        node.push_back(i);

    for(int i=0;i<costs.size();i++)
    {
        if(!cycle_check(costs[i][0], costs[i][1]))
        {
            answer += costs[i][2];
            Union_Parent(costs[i][0], costs[i][1]);
        }
    }

    return answer;
}


int main()
{
    int land_num, edge_num;
    vector<vector<int>> costs;
    int kk;

    cin >> land_num >> edge_num;

    for(int i=0;i<edge_num;i++)
    {
        costs.push_back(vector<int>());
        for(int j=0;j<3;j++)
        {
            cin >> kk;
            costs[i].push_back(kk);
        }
    }
    cout << Solution(land_num+1, costs) << endl;
    // 1 <= N <=100

    return 0;
}