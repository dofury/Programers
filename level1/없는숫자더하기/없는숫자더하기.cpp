#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    vector<int> number = {1,2,3,4,5,6,7,8,9,0};
    vector<int> notNumber;
    int count = 0;
    for(int i=0; i<number.size(); i++)
    {
        for(int j=0;j<numbers.size();j++)
        {
            if(number[i] == numbers[j])
                count++;
        }
        if(count == 0)
            notNumber.push_back(number[i]);
        count = 0;
    }
    
    for(int i =0;i<notNumber.size();i++)
        answer += notNumber[i];
    return answer;
}
/*
1부터 0까지 들어있는 기준 숫자 벡터를 만든다.
반복문을 돌려가며 기준 숫자벡터와 주어진 숫자벡터를 비교해서 같으면 카운트값을 올린다.
카운트값이 0일경우 기준숫자 벡터에 숫자가 주어진 숫자벡터에 없는 것이므로 없는 숫자 벡터에 추가한다.
없는 숫자벡터의 값들을 전부더한다.
*/
