#include <string>
#include <vector>
#include <sstream>
#include <map>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(string polynomial) {
    string answer = "";
    
    vector<string> poly;
    
    istringstream ss(polynomial);
    string token;
    while(getline(ss, token, ' '))
        if(token!="+")  poly.push_back(token);
    
    map<int, int, greater<int>> m;
    int count_x, pos_x, num=0;
    for(string str : poly)
    {
        count_x = count(str.begin(), str.end(), 'x');
        pos_x = str.find('x');
        
//        cout << pos_x << " ";
        if(pos_x!=string::npos && pos_x!=0)    num = stoi(string(str.begin(), str.begin()+pos_x));
        else if(pos_x == 0) num = 1;
        else    num = stoi(str);
        cout << num << " ";
        
        auto it = m.insert({count_x, num});
        if(!it.second)  m[count_x] += num;
    }
    
    for(auto x_m : m)
    {
        answer += to_string(x_m.second);
        if(answer == "1" && x_m.first > 0)  answer.pop_back();
        for(int i=0;i<x_m.first;i++)    answer.push_back('x');
        answer += " + ";
    }
    
    for(int i=0;i<3;i++)    answer.pop_back();
    
    return answer;
}