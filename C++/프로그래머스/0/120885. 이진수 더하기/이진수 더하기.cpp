#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(string bin1, string bin2) {
    string answer = "";
    
    int sum, upper = 0;
    while((!bin1.empty() || !bin2.empty()) || upper == 1)
    {
        if(bin1.empty()&&bin2.empty())
            sum = upper;
        else if(bin1.empty())
        {
            sum = (int)bin2.back() - '0' + upper;
            bin2.pop_back();
        }else if(bin2.empty())
        {
            sum = (int)bin1.back() - '0' + upper;
            bin1.pop_back();
        }else
        {
            sum = (int)bin1.back() + (int)bin2.back() - 2*'0' + upper;
            bin1.pop_back();
            bin2.pop_back();
        }
        
        if(sum > 1)
        {
            sum -=2;
            upper = 1;
        }else
            upper = 0;
        answer.push_back(sum+'0');
        cout << sum<<" ";
    }
    
    reverse(answer.begin(), answer.end());
    
    if(answer.empty())  answer = "0";    
    
    return answer;
}