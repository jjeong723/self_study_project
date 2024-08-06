#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer;
    
    vector<int> ans;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)    ans.push_back(1);
            else    ans.push_back(0);
        }
        answer.push_back(ans);
        ans.clear();
    }
    
    return answer;
}