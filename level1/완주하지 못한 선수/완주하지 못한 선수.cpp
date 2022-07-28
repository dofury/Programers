#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    unordered_map<string,int> hash;
    
    for(string &s : participant)
    {
        hash[s]++;
    }
    for(string &s : completion)
    {
        hash[s]--;
    }
    for(string &s : participant)
    {
        if(hash[s] == 1)
            answer = s;
    }
    return answer;
}
/*
unordered_map 을 사용해 hash를 통한 테이블을 구성한다
paricipant 벡터에 있는 string키의 값을 1 증가시켜준다
completion 벡터에 있는 string키의 값을 1 감소시켜준다
string키의 값이 여전히 1인 string를 찾는다.
*/
