#include<iostream>

using namespace std;
int * arr;

char check_ab(int a, int b)
{
    if(arr[a] == arr[b])    return 'O';
    else    return 'X';
}

void add_ab(int a, int b)
{
    arr[b] = arr[a];
}

int main()
{
    int N, M;
    int ch, a, b;

    cin >> N >> M;
    arr = new int[N];
    
    for(int i=0;i<N;i++)    arr[i] = i;

    for(int i=0;i<M;i++)
    {
        cin >> ch >> a >> b;
        if (ch == 0)    add_ab(a, b);
        if (ch == 1)    cout << check_ab(a, b) << endl;
    }

    return 0;
}