#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;
    
    int sum=0;
    for(int i=total;i>total-num;i--)  sum+=i;
    
    int a = total - num;
    while(sum!=total)
    {
        a--;
        sum = sum - num;
    }
    
    for(int i=a+1;i<num+a+1;i++)  answer.push_back(i);
    
    return answer;
}