#include <string>
#include <vector>

using namespace std;

string solution(string n_str) {
    string answer = "";
    auto i=n_str.begin();
    
    for(; i!=n_str.end();i++)
        if(*i != '0') 
        {
            answer = string(i, n_str.end());
            break;
        }
    
    return answer;
}