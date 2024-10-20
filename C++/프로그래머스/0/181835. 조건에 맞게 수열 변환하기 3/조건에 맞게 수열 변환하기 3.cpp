#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    
    if(k%2 == 1)    for(auto a=arr.begin();a!=arr.end();a++)    *a *=k;
    else    for(auto a=arr.begin();a!=arr.end();a++)    *a +=k;
    
    answer = arr;
    return answer;
}