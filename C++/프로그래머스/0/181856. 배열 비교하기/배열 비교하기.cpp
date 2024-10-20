#include <string>
#include <vector>

using namespace std;

int sum(vector<int> arr)
{
    int result = 0;
    for(int a : arr)
        result += a;
    
    return result;        
}


int solution(vector<int> arr1, vector<int> arr2) {
    int answer = 0;
    
    if(arr1.size() > arr2.size())   return 1;
    else if(arr1.size() < arr2.size())  return -1;
    else
    {
        int sum1 = sum(arr1);
        int sum2 = sum(arr2);
        if(sum1 == sum2)    return 0;
        else if(sum1 > sum2)   return 1;
        else    return -1;
    }
    
    return answer;
}