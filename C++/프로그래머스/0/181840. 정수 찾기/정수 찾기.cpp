#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> num_list, int n) {
    int answer = 0;
    
    auto iter = find(num_list.begin(), num_list.end(), n);
    if(iter == num_list.end())  return 0;
    else    return 1;
    
    return answer;
}