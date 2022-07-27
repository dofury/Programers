#include <string>

using namespace std;

int solution(string s) {
    int answer = 0;
    string number = "";
    if(s[0] == '-')
    {
        for(int i=1;i<s.size();i++)
        {
            number += s[i];
        }
        answer = 0 - stoi(number);
    }
    else
        answer = stoi(s);
        
    return answer;
}
/*
s[0]가 음수와 양수를 결정한다. s[0]가 '-'라면 s[0]를 제외하고 복사한 문자열을 number 변수에 담는다.
number변수를 stoi함수를 통해 int로 형변환을 한다음 0에서 빼줌으로서 음수로 변환할 수 있다.
양수의 경우는 stoi함수를 통해 int로 바로 형변환을 한다.
이를 반환한다.
*/
