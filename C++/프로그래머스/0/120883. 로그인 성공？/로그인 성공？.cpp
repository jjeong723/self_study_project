#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db) {
    string answer = "";
    map<string, string> m;
    
    for(auto data:db)   m.insert({data[0], data[1]});
    
    if(m.find(id_pw[0]) == m.end()) answer = "fail";
    else if(m[id_pw[0]]==id_pw[1])  answer = "login";
    else    answer = "wrong pw";
    
    
    return answer;
}