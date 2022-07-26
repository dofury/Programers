#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    string start = "김서방은 ";
    string end = "에 있다";
    int index = 0;
    for(int i =0;i<seoul.size();i++)
    {
        if(seoul[i] == "Kim")
        {
            index = i;
            break;
        }            
    }
    answer = start + to_string(index) + end;
    return answer;
}

/*
seoul 벡터을 반복문을 통해 인덱스를 접근을 한다.
IF문을 통해 "Kim" 일경우 i 인덱스를 index 변수에 저장하고 answer에 넣어 반환한다.
*/
