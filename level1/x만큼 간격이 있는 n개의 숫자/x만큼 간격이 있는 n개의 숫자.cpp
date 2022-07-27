#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    for(int i=1;i<=n;i++)
    {
        answer.push_back(x*i);
    }
    return answer;
}
/*
x부터 시작해 x씩 증가하며 n개를 지녀야 합니다.
반복문에서 x*i (i는 1부터)를 answer 벡터에 추가하는 것을 n번 반복하면 됩니다. 
*/
