#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int solution(vector<string> strArr) {
    int answer = 0;
    
    map<int, int> count_arr;
    
    vector<int> nums;
    
    for(auto str : strArr)
    {
        auto insert_s = count_arr.insert({str.size(), 1});
        if(!insert_s.second)    count_arr[str.size()]++;
    }
    
    for(auto iter : count_arr)
        nums.push_back(iter.second);
    
    auto max_value = max_element(nums.begin(), nums.end());
    answer = *max_value;
    
    return answer;
}