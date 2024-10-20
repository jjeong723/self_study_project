#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int chicken) {
    int answer = 0;
    
    int a = chicken;
    int b = chicken%10;

    while(a!=0)
    {
        a = a/10;
        b += a%10;

        answer += a;
        cout << answer << " "<<a <<" "<<b <<endl;
    }
    
    answer += b/10;
    if(b%10 + b/10 >= 10)   answer++;
    
    return answer;
}