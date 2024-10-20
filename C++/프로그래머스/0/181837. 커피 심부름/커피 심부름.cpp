#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

int solution(vector<string> order) {
    int answer = 0;
    
    map<string, int> m;
    m.insert({"cafelatte", 5000});
    m.insert({"americano", 4500});
    
    vector<string> menu;
    menu.push_back("cafelatte");
    menu.push_back("americano");
    
    string::size_type iter;
    for(auto o : order)
    {
        if(o == "anything")
        {
            answer += m["americano"];
            continue;
        }
        for(auto me : menu)
        {
            iter = o.find(me);
            if(iter != string::npos)
            {
                answer += m[me];
                break;
            }
        }
    }
    
    return answer;
}