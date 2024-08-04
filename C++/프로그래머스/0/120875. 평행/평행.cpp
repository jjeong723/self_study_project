#include <string>
#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

bool pallel_line(vector<int> d1, vector<int> d2, vector<int> d3, vector<int> d4)
{
    vector<double> a1, a2;
    vector<double> aa;
    bool s = false;
    
    for(int i=0;i<2;i++)
    {
        a1.push_back(d1[i] - d2[i]);
        a2.push_back(d3[i] - d4[i]);
    }
    
    aa.push_back(a1[0]/a2[0]);
    aa.push_back(a1[1]/a2[1]);
    
    if(aa[0] == aa[1])  return true;
    //else if(a1[0] == -a2[0] && a1[1] == -a2[1]) return true;
    
    return s;
}
    
int solution(vector<vector<int>> dots) {
    int answer = 0;
    
    if(pallel_line(dots[0], dots[1], dots[2],dots[3]))  
    {
        answer = 1;
        cout << "number 1";
    }else if(pallel_line(dots[0], dots[2], dots[1],dots[3]))
    {
        answer = 1;
        cout << "number 2";
    }else if(pallel_line(dots[0], dots[3], dots[1],dots[2])) answer = 1;
    return answer;
}