#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    int length = phone_number.size()-4;
    for(int i=0;i<length;i++)
    {
        phone_number[i] = '*';
    }
    answer = phone_number;
    return answer;
}
/*
문제의 요점은 맨끝 네자리 숫자만 살리면 되므로
0부터 (폰번호 길이에서 -4를한 인덱스)까지만 반복문을 통해 접근해 '*'로 바꿔줍니다.
answer에 phone_number을 넣고 반환합니다.
*/
