#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for(int i=1;i<=n;i++)
    {
        if(n%i == 1)
        {
            answer = i;
            break;
        }
    }   
    return answer;
}
/*
주어진 n을 1부터 n까지 나눈다.
나머지가 1일시 answer에 넣고 break 한다.
이를 반환한다.
*/
