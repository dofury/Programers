#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int pn = 0;
    int yn = 0;
    
    for(int i=0;i<s.size();i++)
    {
        if (s[i] == 'p' || s[i] == 'P')
            pn++;
        if (s[i] == 'y' || s[i] == 'Y')
            yn++;
    }
    
    if(yn == pn)
        answer = true;
    else
        answer = false;

    return answer;
}
/*
반복문을 통해 s를 인덱스 접근한다.
if문을 통해 p,P와 y,Y의 개수를 센다. 
개수가 둘다 같으면 true를 반환하고 다르면 false 를 반환한다.
*/
