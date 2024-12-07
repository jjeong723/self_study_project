#include <string>
#include <vector>

#include <iostream>

using namespace std;

vector<int> transfer_mmss_vector(string tt)
{
    vector<int> answer;
    int mm, ss;
    
    for(auto s : tt)
    {
        if(s == ':')    continue;
        answer.push_back(int(s-'0'));
    }

    answer[0] = answer[0]*10 + answer[1];   //mm
    answer[1] = answer[2]*10 + answer[3];   //ss
    
    answer.pop_back();
    answer.pop_back();
    
    return answer; // [mm, ss]
}

void check_video_len(vector<int> & pos, vector<int> limit_len)
{
    if(pos[0] == 0 && pos[1] < 0)        // mm:ss 가 00:00 이하를 가려할 경우
    {
        pos[0] = 0;
        pos[1] = 0;
        return ;
    }
    
    
    int ss = pos[1];
    if(ss < 0)          // ss 가 마이너스 일 경우
    {
        pos[1] = 60 + ss;
        pos[0]--;
    }else if(ss > 59)   // ss 가 59를 초과할 경우
    {
        pos[1] = ss - 60;
        pos[0]++;
    } 
    
    if(pos[0] > limit_len[0] || (pos[0] == limit_len[0] && pos[1] > limit_len[1]))   // mm:ss 가 limit_len를 초과할 경우
    {
        pos[0] = limit_len[0];
        pos[1] = limit_len[1];

        return ;
    }
   
}

void check_video_op(vector<int> &pos, string op_start, string op_end)
{
    vector<int> op_s, op_e;
    op_s = transfer_mmss_vector(op_start);
    op_e = transfer_mmss_vector(op_end);
    
    if(pos[0] > op_s[0] || (pos[0] == op_s[0] && pos[1] >= op_s[1]))
        if(pos[0] < op_e[0] || (pos[0] == op_e[0] && pos[1] <= op_e[1]))
        {
            pos[0] = op_e[0];
            pos[1] = op_e[1];
        }
}


string solution(string video_len, string pos, string op_start, string op_end, vector<string> commands) 
{
    string answer = "";
    vector<int> ms_pos, max_video;
    
    ms_pos = transfer_mmss_vector(pos);
    max_video = transfer_mmss_vector(video_len);
    
    check_video_op(ms_pos, op_start, op_end);       // 오프닝 넘기기

    for(auto com : commands)
    {
        if(com == "prev")       ms_pos[1] -= 10;   // prev : 10초 전 이동
        else if(com == "next")  ms_pos[1] += 10;   // next : 10초 후 이동

        check_video_len(ms_pos, max_video);
        check_video_op(ms_pos, op_start, op_end);  // 오프닝 넘기기
    }
       
    if(ms_pos[0] / 10 == 0) 
    {
        answer.append("0" + to_string(ms_pos[0]));
    }else   answer.append(to_string(ms_pos[0]));
    
    answer.append(":");
    
    if(ms_pos[1] / 10 == 0) 
    {
        answer.append("0" + to_string(ms_pos[1]));
    }else   answer.append(to_string(ms_pos[1]));
    
    
    return answer;  // mm:ss
}