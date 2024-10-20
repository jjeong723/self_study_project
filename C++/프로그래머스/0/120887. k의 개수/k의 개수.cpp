#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    string str;
    const char s = k + '0';
    
    for(int num=i;num <=j; num++)
    {
        str = to_string(num);
        answer += count(str.begin(), str.end(), s);
        str.clear();
    }
    
    return answer;
}