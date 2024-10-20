#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> delete_list) {
    vector<int> answer;
    vector<int>::iterator iter;
    
    for(auto d : delete_list)
    {
        iter = find(arr.begin(), arr.end(), d);
        if(iter != arr.end())
        {
            arr.erase(iter);
        }
    }
    answer = arr;
    
    return answer;
}