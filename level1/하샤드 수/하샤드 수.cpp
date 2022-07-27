#include <string>
#include <vector>
#include <cmath>
#include <iostream>
using namespace std;

bool solution(int x) {
    bool answer = false;
    int count=0;
    int temp = x;
    int sum=0;
    while(temp>=10)
    {
        temp/= 10;
        count++;
    }
    temp = x;
    for(int i=0;i<=count;i++)
    {
        sum += temp % 10;
        temp /= 10;
    }
    if(x % sum == 0)
        answer = true;
    return answer;
}
/*
우선 while 반복문을 통해 x의 값을 복사한 temp를 10보다 작아질때까지 10으로 계속나눠서 몇자리수인지 구합니다.
for 반복문을 통해 x의 값을 복사한 temp의 나머지를 sum에 더해서 넣고 자리수만큼 반복합니다.
x를 sum으로 나눴을때 나머지가 0이면 나누어 떨어지므로 하샤드 수로 판단하고 answer 값에 true를 대입하고 반환합니다.
*/
