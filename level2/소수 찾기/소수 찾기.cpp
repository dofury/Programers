#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(string numbers) {
    int answer = 0;
    vector<int> number;
    vector<int> result;
    int count = 0;
    int check = 0;
    
    
    for (int i = 1; i <= numbers.size(); i++) {
        vector<bool> v(numbers.size() - i, false);
        v.insert(v.end(), i, true);
        do {
            string buffer = "";   
            for (int k = 0; k < numbers.size(); k++) {
                if (v[k]) buffer += numbers[k];
            }
            sort(buffer.begin(), buffer.end());
            do {
                cout << buffer << endl;
                for(int i =0;i<result.size();i++)
                {
                    if(stoi(buffer) == result[i])
                        check++;
                }
                if(check == 0)
                    result.push_back(stoi(buffer));
                check = 0;
            } while(next_permutation(buffer.begin(), buffer.end()));
        } while (next_permutation(v.begin(), v.end()));
    }
    for(int i = 0; i<result.size();i++)
    {
        for(int j = 1; j<=result[i];j++)
        {
            if(result[i] % j == 0)
                count++;
        }
        if(count == 2)
            answer++;
        count = 0;
    }
    
    return answer;
}
/*
조합 알고리즘을 통해 1개부터 뽑아 numbers길이까지 buffer에 저장하는것을 반복합니다.
저장후에 순열 알고리즘을 통해 buffer의 요소를 무작위로 배열합니다.
이때 기존값과 다른값이면 result 벡터에 추가합니다.

result 벡터의 요소를 소수찾기 알고리즘을 통해 소수인경우 answer++ 합니다
*/
