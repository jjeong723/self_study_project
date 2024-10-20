#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <cmath>

using namespace std;


int num;
bool near_n(int a, int b)
{
    if(abs(a-num) == abs(b-num))
        return a>b;
    return abs(a-num) < abs(b-num);
}

vector<int> solution(vector<int> numlist, int n) {
    vector<int> answer;
    
    num = n;

    sort(numlist.begin(), numlist.end(), near_n);
    
    answer = numlist;
    return answer;
}