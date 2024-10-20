#include <string>
#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    
    int i = 0;
    while(arr.size() > pow(2,i))
        i = i+1;
    cout << i;
    
    int num = pow(2, i) - arr.size();
    if(num > 0)
        for(int j=0;j<num; j++)   arr.push_back(0);
    
    answer = arr;
    
    return answer;
}