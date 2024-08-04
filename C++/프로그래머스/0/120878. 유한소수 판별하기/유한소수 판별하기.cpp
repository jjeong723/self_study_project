#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 1;
    
    // 기약분수 만들기
    int i = 1;
    while (1)
    {
        if (i == a + 1) break;
        
        if( a % i == 0 && b % i == 0)
        {
            a /= i;
            b /= i;
            i = 1;
        }
        i++;
    }
    
    // 소인수 분해하기
    int divider = 2;
    while (b > 1)
    {
        while (b % divider == 0)
        {
            // 만약 2, 5가 아닌 다른 것으로 나누어진다면 
            // 무한소수이므로 2를 return
            if (divider != 2 && divider != 5)
            {
                return 2;
            }
            b /= divider;
        }
        divider++;
    }
    
    return answer;
}
