#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;
    int sum =0;
    int i =0;
    sort(d.begin(),d.end());
    while(i<d.size())
    {
        sum+= d[i];
        if(sum > budget)
            break;
        i++;
    }
    answer = i;
    return answer;
}
/*
부서 별로 신청한 금액이 들어있는 d벡터를 내림차순으로 정렬한다.
반복문을 돌려 sum에 순차적으로 더하고 budget 보다 클시 break 한다.
i는 0부터 시작이므로 i가 최대로 지원할수있는 수이다. 이를 반환한다.
*/
