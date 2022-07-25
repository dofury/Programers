#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    string temp = "";
    int length = s.size();
    if(length % 2 == 1) // 홀수라면
    {
        temp = s[length/2];
        answer.append(temp);
    }
    else
    {
        temp = s[length/2-1];
        answer.append(temp);
        temp = s[length/2];
        answer.append(temp);
    }
    return answer;
}
/*
글자 길이가 홀수면 글자가 한개이고 길이를 2로나눈 값을 인덱스로 접근해 answer 벡터에 추가한다.
짝수일시는 글자가 2개이므로  길이를 2로나눈 값을 인덱스로 접근한값과 -1한값을 answer 벡터에 추가한다.
이를 반환한다.
*/
