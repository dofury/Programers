#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    
    for(int i =0;i<s.length();i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z') 
        {
            if(('z' - s[i]) < n)
                s[i] = 'a' + ((n-1)-('z'- s[i]));
            else
                s[i] += n;
        }
        if(s[i] >= 'A' && s[i] <= 'Z') 
        {
            s[i] += n;
            if(s[i] > 'Z')
                s[i] -= 26;
        }

    }
    answer = s;
    return answer;
}
/*
시저 암호는 s 변수의 문자 하나하나를 아스키코드에서 n만큼 밀어내면 된다.
이때 z가 넘으면 a부터 계산하도록 수정해준다.
소문자의 경우에는 대문자처럼 Z를 넘을시 -26을 하고 더하는 방식에서 오류가 발생했다.
그러므로 소문자는 z와 s[i]의 차이값을 이용해서 계산해주었다.
그다음 answer를 반환한다.
*/
