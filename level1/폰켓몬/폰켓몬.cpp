#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> nums)
{
    vector<int> catchMon;
    int answer = 0;
    int choiceMonVal = nums.size() / 2;
    int catchMonSize = 0;
    int catchCount =0;
    for(int i=0; i < nums.size(); i++)
    {
        catchMonSize = catchMon.size();
        if(catchMon.size() == 0)
        {
            catchMon.push_back(nums[i]);
        }
        else
        {
            for(int j=0; j <  catchMonSize; j++)
            {
                if(nums[i] == catchMon[j])
                {
                    catchCount++;
                }
            }
            if(catchCount == 0 )
                catchMon.push_back(nums[i]);
            catchCount = 0;
        }
    }
    if(choiceMonVal >= catchMon.size())
        answer = catchMon.size();
    else
    {
        answer = choiceMonVal;
    }
    return answer;
}
/*
중복이 있는 포켓몬벡터 nums 안에서 겹치지 않게 최대로 고를 수 있는 수를 구하는 것이며 nums의 수/2를 넘으면 안된다.
포켓몬 벡터 nums 안에서 중복이 없게 catchMons 벡터에 담는다.
catchMons 크기보다 nums.size()/2 가 크면 catchMons 길이를 반환하고
작으면 nums.size()/2 를 반환한다.
*/
