#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    int count = 0;
    for(int i =0;i< arr.size();i++)
    {
        if(arr[i] % divisor == 0)
        {
           answer.push_back(arr[i]);
            count++;
        }
    }
    sort(answer.begin(),answer.end());
    if(count == 0)
        answer.push_back(-1);
    return answer;
}
/*
arr에서 divisor 로 나눴을때 나머지가 0이면
answer 벡터에 추가하고 count 값을 증가시킨다.
count가 0일시 -1를 answer 벡터에 추가하고 반환한다.
아닐시는 그대로 answer 벡터를 반환한다.
*/
