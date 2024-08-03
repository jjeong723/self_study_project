#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> search_x(vector<vector<int>> b)
{
    vector<int> result;
    int size_a = b.size();
    vector<int>::iterator iter;
    
    for(int i=0;i<size_a;i++)
    {
        iter = find(b[i].begin(), b[i].end(), 1);
        if(iter!=b[i].end())
        {
            result.push_back(i);
            result.push_back(iter-b[i].begin());
            break;
        }
    }
    if(iter == b[size_a-1].end())  
    {
        result.push_back(-1);
    }
        
    return result;
}

vector<vector<int>> fill_board(vector<vector<int>> b, vector<int> s)
{
    vector<vector<int>> board(b);
    int size_b = b.size();
    
    for(int a=s[0]-1; a<=s[0]+1; a++)
    {
        if(a >=0 && a < size_b)
        {
            for(int b=s[1]-1; b<=s[1]+1; b++)
            {
                if(b >=0 && b < size_b)
                {
                    board[a][b] += 1;
                }
            }
        }
    }    
    return board;
}


int solution(vector<vector<int>> board) {
    int answer = 0;
    
    vector<vector<int>> board_x(board);
    vector<int> find_x;
    
    while(1)
    {
        find_x = search_x(board);
        if(find_x.front()==-1)  break;
        
        board_x = fill_board(board_x, find_x);
        board[find_x[0]][find_x[1]] = 0;
        find_x.clear();
    }
    
    for(auto x : board_x)
    {
        for(int i=0;i<x.size();i++) cout << x[i] << " ";
        cout << endl;
        answer += count(x.begin(), x.end(), 0);
    }
    return answer;
}