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
모든 숫자가 들어있는 number 벡터를 만든다.
없는 숫자를 담을 notNumber 벡터를 만든다.
반복문을 돌려 겹치는 숫자가 있을때 증가하는 count 변수를 만든다.
count == 0 일시 없는 숫자이기 때문에 그숫자를 notNumber 벡터에 추가한다.
notNumber 벡터에 모든숫자를 다더한다음 리턴한다.
*/
