#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> rank, vector<bool> attendance) {
    int answer = 0;
    int size_rank = rank.size();
    vector<int> rank_t;
    
    for(int i=0;i<size_rank;i++)
    {
        if(!attendance[i])  continue;
        else
            rank_t.push_back(rank[i]);
    }
    
    sort(rank_t.begin(), rank_t.end());
    
    int a = find(rank.begin(), rank.end(), rank_t[0]) - rank.begin();
    int b = find(rank.begin(), rank.end(), rank_t[1]) - rank.begin();
    int c = find(rank.begin(), rank.end(), rank_t[2]) - rank.begin();
    
    answer = 10000*a + 100*b + c;
    
    return answer;
}