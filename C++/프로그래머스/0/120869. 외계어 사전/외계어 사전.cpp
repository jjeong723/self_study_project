#include <string>
#include <vector>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    int answer = 0;
    
    bool k;
    for(auto str : dic)
    {
        if(str.size() != spell.size())  continue;
        else
        {
            k = true;
            for(auto s : spell)
            {
                auto search_s = str.find(s);
                if(search_s == string::npos)
                {
                    k = false;
                    break;
                }
            }
            if(k)   return 1;
        }
    }
    if(!k)  return 2;
    
    return answer;
}