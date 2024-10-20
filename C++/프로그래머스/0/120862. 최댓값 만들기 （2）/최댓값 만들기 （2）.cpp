#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    sort(numbers.begin(), numbers.end());
    
    int max1, max2;
    max1 = numbers[0] * numbers[1];
    max2 = numbers[numbers.size()-1] * numbers[numbers.size()-2];
    
    if(max1 > max2) return max1;
    else return max2;
    
    return answer;
}