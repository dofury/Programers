#include <string>
#include <vector>

using namespace std;

int solution(vector<int> a, vector<int> b) {
    int answer = 0;
    for(int i=0; i<a.size();i++)
    {
        answer += a[i] * b[i];
    }
    return answer;
}
/*
서로 길이가 같기 때문에
같은 인덱스로 접근하여 곱한다음 answer에 더한다.
이를 반복한후 answer를 반환한다.
*/
