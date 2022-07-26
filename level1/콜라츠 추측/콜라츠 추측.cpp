#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    int index = 0;
    int temp=num;
    for(int i=0;temp!=1;i++)
    {
        if(temp%2 == 0)
            temp /= 2;
        else if(temp%2 ==1)
            temp = (temp*3)+1;
        index = i+1;
        if(index > 500)
            break;
    }
    if(num == 1)
        answer = 0;
    else if(index > 500)
        answer = -1;
    else
        answer = index;
    return answer;
}
/*
입력된 수 num가 짝수라면 2로 나눕니다. 
입력된 수 num가 홀수라면 3을 곱하고 1을 더합니다. 
이 결과로 나온 수에 같은 작업을 1이 될 때까지 반복합니다.
횟수가 500을 넘는다면 answer에 -1을 넣습니다.
아니라면 answer에 횟수를 넣고 리턴합니다.
*/
