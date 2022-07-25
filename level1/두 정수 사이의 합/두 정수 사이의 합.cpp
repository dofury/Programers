#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    if(a<b)
    {
       for(int i = a;i<=b;i++)
       {
           answer += i;
       }
    }
    else if(a>b)
    {
        for(int i = b;i<=a;i++)
        {
            answer += i;
        }
    }
    else
    {
        answer = a;
    }
    return answer;
}
/*
a<b 반복문을 통해 주어진 a부터 b까지를 answer에 전부더한다음 리턴한다.
a>b 반복문을 통해 주어진 b부터 a까지를 answer에 전부더한다음 리턴한다.
a==b 라면 둘중 하나인 a를 리턴한다.
*/
