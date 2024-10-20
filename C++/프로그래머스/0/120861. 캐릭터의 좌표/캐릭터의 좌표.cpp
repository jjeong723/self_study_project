#include <string>
#include <vector>
#include <map>
#include <iostream>
#include <cmath>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer;
    answer.push_back(0);
    answer.push_back(0);
    
    map<string, vector<int>> m;
    m.insert({"up", vector<int>{0, 1}});
    m.insert({"down", vector<int>{0, -1}});
    m.insert({"left", vector<int>{-1, 0}});
    m.insert({"right", vector<int>{1, 0}});
    
    vector<int> move;
    for(auto input : keyinput)
    {
        move = m[input];
        answer[0] += move[0];
        answer[1] += move[1];
        
        if(abs(answer[0]) > board[0]/2)  answer[0] -= move[0];
        if(abs(answer[1]) > board[1]/2)  answer[1] -= move[1];
        move.clear();
        cout << answer[0] <<" " << answer[1]<<endl;
    }
    
    return answer;
}