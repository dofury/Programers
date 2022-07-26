#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    for(int i =1;i<=n;i++)
    {
        if(i%2 == 1)
            answer.append("수");
        if(i%2 == 0)
            answer.append("박");
    }
    return answer;
}
/*
반복문을 통해 n번 반복해서 돌려서n을 2로 나눠서 나머지가 1이면 answer에 수를 붙인다.
나머지가 0이면 answer에 박을 붙인다.
answer를 반환한다.
*/
