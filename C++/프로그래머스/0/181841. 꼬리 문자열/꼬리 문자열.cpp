#include <string>
#include <vector>

using namespace std;

string solution(vector<string> str_list, string ex) {
    string answer = "";
    string::size_type iter;
    
    for(auto str : str_list)
    {
        iter = str.find(ex);
        if(iter == string::npos)    answer = answer + str;
    }
    
    return answer;
}