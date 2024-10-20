#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    
    for(auto s=myString.begin();s!=myString.end();s++)
    {
        if(*s >='a' && *s <='l')  *s = 'l';
    }
    answer = myString;
    
    return answer;
}