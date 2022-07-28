#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solution(vector<int> nums) {
    int answer = 0;
    int sum=0;
    int check=0;
    int k = 3;
    vector<int> set;
    // 0, 1을 넣어 임시 조합 생성
    vector<int> tempVector;
 
    for (int i = 0; i < k; i++)
    {
        tempVector.push_back(1);
    }
 
    for (int i = 0; i < nums.size() - k; i++)
    {
        tempVector.push_back(0);
    }
 
    sort(tempVector.begin(), tempVector.end());
 
    do
    {
        for (int i = 0; i < tempVector.size(); i++)
        {
            if (tempVector[i] == 1)
            { // 실제값 출력
                set.push_back(nums[i]);
            }
        }
        sum = set[0] + set[1] + set[2];
        for(int i=1;i<=sum;i++)
        {
            if(sum%i == 0)
                check++;
        }
        if(check == 2)
            answer++;
        check = 0;
        sum =0;
        set.clear();
 
    } while (next_permutation(tempVector.begin(), tempVector.end()));
 

    return answer;
}
/*
조합 알고리즘을 가져와서
3개의 숫자가 있는 조합의수를 더한뒤 이를 1부터 조합의 합까지 나눈다.
나누어 떨어지는 수가 2개밖에 없으면 소수로 판단하고 answer++ 한다.
이를 반복한다.
*/
