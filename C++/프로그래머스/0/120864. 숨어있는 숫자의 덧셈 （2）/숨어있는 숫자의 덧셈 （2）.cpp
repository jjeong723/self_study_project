#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    
    vector<int> nums;
    int num = 0;
    for(char str : my_string)
    {
        if(str >='0' && str<='9')   
            num = 10*num + (int)str - '0';
        else if(!num)   continue;
        else{
            nums.push_back(num);
            cout << num <<" ";
            num = 0;
        }
    }
    answer = num;
    for(int a : nums)
        answer += a;
    
    return answer;
}