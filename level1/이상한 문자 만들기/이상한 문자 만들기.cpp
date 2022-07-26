#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int count = 0;
    for(int i =0;i<s.size();i++)
    {
        if(count%2 == 0)
            s[i] = toupper(s[i]);
        if(count%2 == 1)
            s[i] = tolower(s[i]);
        count++;
        if(s[i] == ' ')
            count = 0;
            
    }
    answer = s;
    return answer;
}
/*
반복문을 돌려 count 변수를 반복 할때마다 증가시켜준다.
이를 나눠서 짝수일 때는 대문자로 바꾸고 홀수 일때는 소문자로 바꾼다.
만약 공백을 만나면 count 변수로 초기화 시켜준다.
이를 answer 변수에 넣고 반환한다.
*/
