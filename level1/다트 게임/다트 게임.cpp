#include <string>
#include <vector>
#include <cmath>
#include <iostream>
using namespace std;

int solution(string dartResult) {
    int answer = 0;
    int count=-1;
    int loopCount=0;
    vector<int> number;
    for(char &c : dartResult)
    {
        if(isdigit(c) == true)
        {
            if(isdigit(dartResult[loopCount-1]) == true)
            {
                number[count] = 10;
            }
            else
            {
                number.push_back(c-'0');
                count++; 
            }
        }
        if(c == 'D')
        {
            number[count] = pow(number[count],2);
        }
        if(c == 'T')
        {
            number[count] = pow(number[count],3);
        }
        if(c == '*')
        {
            if(count == 0)// 첫번째로 나올경우
                number[count] *= 2;
            else
            {
                number[count-1] *= 2;
                number[count] *= 2; 
            }
        }
        if(c == '#')
            number[count] *= -1;
        loopCount++;
    }
    for(int i=0;i<number.size();i++)
    {
        answer += number[i];
    }
    return answer;
}
/*
for(char c : dartResult) 를통해서 문자열을 하나씩 가져온다
숫자일경우 number벡터에 저장한다.
S,D,T 일경우 그에 대응하는 number벡터 값을 제곱해준다. S일경우는 1제곱이니 따로해주지않는다.
* 일경우는 첫번째 숫자만 있는경우라면 첫번째 숫자에 곱하기 2를 첫번째 숫자가아니라면 이전 number 벡터 숫자와 현재 number 벡터숫자 둘다 *2를한다.
# 일경우에는 현재 number 벡터 숫자에다가 -1를 곱함으로서 음수로 만들어준다.
number 벡터의 값을 전부더해준다음 answer에 담아 return한다.


*/
