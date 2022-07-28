#include <string>
#include <vector>
#include <iostream>
using namespace std;

bool find(vector<int> reserve,int student){
    
    for(int i=0;i<reserve.size();i++)
    {
        if(reserve[i] == student)
            return true;
    }
    
}
int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    vector<int> amount;
    for(int i =0;i<n;i++)
    {
        amount.push_back(1);
        for(int j=0;j<lost.size();j++)//잃어버린 학생 반영
        {
            if(i+1 == lost[j])
            {
                amount[i] -= 1;
                break;
            }
        }
        for(int j=0;j<reserve.size();j++)//여분이 있는 학생 반영
        {
            if(i+1 == reserve[j])
            {
                amount[i] += 1;
                break;
            }
        }
    }
    for(int i= 0; i<n;i++)//잃어버린 학생 앞뒤번호 학생이 여분이 있으면 나눠줌
    {
        if(amount[i] == 0)
        {
            if(i > 0 && amount[i-1] == 2)
            {
                amount[i] += 1;
                amount[i-1] -= 1;
            }
            else if(amount[i+1] == 2)
            {
                amount[i] += 1;
                amount[i+1] -= 1;
            }
        }
    }
    for(int i=0;i<n;i++)// 체육복이 한개이상 있는 사람의 수를 셈
    {
        if(amount[i] >= 1)
            answer++;
    }
    cout << amount[0];
    return answer;
}
/*
우선 학생마다 가지고있는 체육복의 수를 저장하는 벡터를 만든다.
기본값은 1로 추가하고 잃어버린 학생은 1을 빼며 여분이 있는 학생은 1을 더해준다.
벡터를 인덱스로 접근해 체육복의 수가 0인 i 인덱스 학생에게 [i-1] || [i+1] == 2 인 친구가 있다면 나눠준다. 
이때 i-1을 우선 검사해야 최대한 많은 학생에게 빌려줄 수 있다. 
체육복의 수가 1이상인 학생을 센다음 answer에 담아 리턴한다.
*/
