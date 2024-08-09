#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> next_number_rule(vector<int> c)
{
    vector<int> result;
    int rule, value;
    
    if(c[0]-c[1] == c[1]-c[2])
    {
        rule = 1;
        value = c[1] - c[0];
    }else if(c[1]/c[0] == c[2]/c[0])
    {
        rule = 2;
        value = c[1]/c[0];
    }
    

    result = {rule, value};
    return result;
}

int solution(vector<int> common) {
    int answer = 0;
    
    vector<int> result = next_number_rule(common);
    // 1: 등차수열, 2: 등비수열  / 등차/등비 값
    
    if(result[0] == 1) answer = common.back() + result[1];
    else    answer = common.back() * result[1];
    
    return answer;
}