#include <string>
#include <vector>
#include <cctype>

using namespace std;

bool solution(string s) {
    bool answer = false;
    int checkDigit = 0;
    bool checkLength = false;
    
    if(s.length() == 4|| s.length() == 6)
        checkLength = true;
    for(int i =0;i<s.length();i++)
    {
        if(isdigit(s[i]) == 0)
            checkDigit++;
    }
    if(checkDigit == 0 && checkLength == true)
        answer = true;
    return answer;
}
/*
s.length() 함수를 통해 값을 받은뒤 if문으로 길이가 4나 6이면 checkLength를 true 합니다.
반복문을 통해 s를 인덱스 접근 한뒤 isdigit()를 통해서 숫자인지 체크를 하고 숫자가 아니면 checkDigit를 ++ 합니다.
checkDigit가 0이고 (전부숫자) checkLength가 true 일시 answer를 true로 반환합니다.
*/
