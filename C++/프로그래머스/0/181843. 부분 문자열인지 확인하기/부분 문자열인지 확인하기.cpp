#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string target) {
    int answer = 0;
    
    auto ss = my_string.find(target);
    if(ss == string::npos)  return 0;
    else    return 1;
    
    return answer;
}