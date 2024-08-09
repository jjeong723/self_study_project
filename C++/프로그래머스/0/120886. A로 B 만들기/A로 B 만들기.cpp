#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(string before, string after) {
    int answer = 1;
    
    for(auto str : before)
    {
        auto iter = after.find(str);
        if(iter != string::npos)
        {
            after.erase(iter, 1);
        }else   return 0;
    }
        
    return answer;
}