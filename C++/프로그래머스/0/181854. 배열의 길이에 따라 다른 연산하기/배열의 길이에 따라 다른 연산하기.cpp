#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int n) {
    vector<int> answer;
    int k = (arr.size()+1)%2;   //홀수 0 짝수 1
    
    for(int i=k;i<arr.size();i+=2)
        arr[i] += n;
    
    answer = arr;
    
    return answer;
}