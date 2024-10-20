#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0;
    
    int width, height;
    width = abs(dots[0][0] - dots[1][0]);
    if(!width)  width = abs(dots[0][0] - dots[2][0]);
    height = abs(dots[0][1] - dots[2][1]);
    if(!height)  height = abs(dots[0][1] - dots[1][1]);
    
    
    answer = width*height;
    
    return answer;
}