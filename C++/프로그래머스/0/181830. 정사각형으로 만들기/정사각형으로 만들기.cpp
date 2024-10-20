#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr) {
    vector<vector<int>> answer;
    
    int diff = arr.size() - arr[0].size();
    
    if(diff < 0)
        for(int i=0;i<-diff;i++)    arr.push_back(vector(arr[0].size(), 0));
    else if(diff > 0)
    {
        for(int iter = 0;iter < arr.size();iter++)
            for(int i=0;i<diff;i++) arr[iter].push_back(0);
    }
    answer = arr;
    
    return answer;
}