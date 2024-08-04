#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool tf_answer(int answer)
{
    bool tf = false;
    
    if(answer%3 == 0)  tf = true;
    else if(answer%10 == 3)    tf = true;
    else if(answer/10 == 3)    tf = true;
    else if(answer/10 == 13)    tf = true;
    
    return tf;
}

int solution(int n) {
    int answer = 0;
    bool tf = true;

    for(int i=0;i < n; i++)
    {
        answer++;
        
        while(tf)
        {
            tf = tf_answer(answer);
            if(tf)  answer++;
        }
        tf = true;
    }

    cout <<answer <<endl;

    return answer;
}