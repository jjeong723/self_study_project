#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) {
    int answer = 0;
    
    auto iter = str2.find(str1);
    if(iter==string::npos)  return 0;
    else    return 1;
    
    return answer;
}