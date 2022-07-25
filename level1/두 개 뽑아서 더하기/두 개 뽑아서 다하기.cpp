#include <string>
#include <vector>
#include <iostream>
#include<algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    int sum = 0;
    for(int i = numbers.size()-1; i>=0;i--)
    {
        for(int j = i-1;j>=0;j--)
        {
            sum = numbers[i] + numbers[j];
            answer.push_back(sum);
            sum = 0;
        }
    }
    sort(answer.begin(),answer.end());
    answer.erase(unique(answer.begin(),answer.end()),answer.end());
    for(int i =0;i<answer.size();i++)
    {
        cout << answer[i] << endl;
    }
    return answer;
}
/*
numbers 벡터안에 있는 두 수를 한번씩 더해서 answer 벡터에 추가한다.
이를 반복한다음 answer를 정렬한다.
answer 에서 unique를 통해 중복되는 값을 제거한다.
answer 반환한다.
*/
