/*
문제 링크 : https://school.programmers.co.kr/learn/courses/30/lessons/120812

*/

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <map>
    
using namespace std;

int solution(vector<int> array) 
{
    int answer = 0;
    vector<int> old_array (array);
    
    array.erase(unique(array.begin(), array.end()), array.end());
    // if # of elemet is 1, return array[0]. 
    if(array.size() == 1)  return array[0];

    map<int, int, greater<int>> bet;
    int a =0, num = 0;
    bool max_dupl;
    for (auto i = array.begin(); i != array.end(); ++i) 
    {
        num = array[i-array.begin()];
        a = count(old_array.begin(), old_array.end(), num);
        
        //bet = {counting, 카운팅에 해당하는 값}
        auto pr = bet.insert({a, num});

        if (pr.first == bet.begin() & !pr.second)  max_dupl = true;
        else if (pr.first == bet.begin()) max_dupl = false;
    }
    
    // pr.first = iter
    // pr.second = true / false  중복없음 / 중복있음
    
    // 첫번째 / 중복       = true
    // 첫번쨰 / 중복 없음   = false
    // 첫번째 아님 / 중복   = pass
    // 첫번째 아님 / 중복 없음  = pass
    
    
    if(max_dupl)    return -1;
    else
    {
        auto iter = bet.begin();
        answer = iter -> second;
        return answer;
    }
}

int main()
{
    vector<int> a = {5, 5,5,5, 2, 2, 2, 3, 3,3, 4, 4, 4, 4, 10, 10, 10, 10 };

    int result = solution(a);

    cout << "result: "<< result;

    return 0;

}