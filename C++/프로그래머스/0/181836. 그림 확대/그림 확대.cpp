#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> picture, int k) {
    vector<string> answer;
    string kk = "";
    char old_p;
    int num;
    
    for(auto pic : picture)
    {
        num = 0;
        old_p = pic[0];
        for(auto iter = pic.begin()+1;iter!=pic.end()+1;iter++)
        {
            num++;
            if(old_p != *iter || iter+1 == pic.end())
            {
                for(int i=0;i<k*num;i++)    kk.push_back(old_p);
                num = 0;
                old_p = *iter;
            }
        }
        for(int j=0;j<k;j++)    answer.push_back(kk);
        kk.clear();
    }
    
    return answer;
}