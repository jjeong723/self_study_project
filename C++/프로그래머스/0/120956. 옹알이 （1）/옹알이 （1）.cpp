#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    
    vector<string> mm;
    mm.push_back("aya");
    mm.push_back("ye");
    mm.push_back("woo");
    mm.push_back("ma");
    
    for(auto str : babbling)
    {
        for(int i=0; i<mm.size();i++)
        {
            auto iter = str.find(mm[i]);
            if(iter != string::npos)
            {
                str.replace(iter, mm[i].size(), " ");
                i = -1;
            }
        }
        cout << str << " ";
        str.erase(remove(str.begin(), str.end(), ' '), str.end());
        if(str.empty()) answer++;
    }
    
    return answer;
}