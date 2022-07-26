#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> num;
    for(int i =1; i<=n;i++)
    {
        if(n%i == 0)
            num.push_back(i);
    }
    for(int i=0;i<num.size();i++)
    {
        answer += num[i];
    }
    return answer;
}
/*
반복문을 돌려 n을 i로 나눠서 나머지가 0인경우 num 벡터에 추가해준다.
반복문을 돌려 num벡터의 값들을 answer에 더해준다.
answer를 반환한다.
*/
