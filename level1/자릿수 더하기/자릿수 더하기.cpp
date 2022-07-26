#include <iostream>
#include <cmath>
#include <vector>

using namespace std;
int solution(int n)
{
    int answer = 0;
    vector<int> sum;
    int tenAmount = 0;
    int index =1;
    int temp;
    while(1)
    {
        if(n < pow(10,index))
            break;
        index++;
    }
    for(int i =0;i<index;i++)
    {
        temp = n%10;
        n /= 10;
        sum.push_back(temp);
    }
    for(int i =0;i<sum.size();i++)
    {
        answer += sum[i];
    }

    return answer;
}
/*
반복문을 돌려 10을 제곱해준다. 이때 n을 넘으면 break 되게해서 n이 몇의 자리수(index)인지 판별한다.
반복문을 돌려 index 만큼 반복하고 나머지 연산과 나누기 연산을 통해 하나씩 분리해서 sum 벡터에 넣어준다.
반복문을 돌려 인덱스 접근을 통해 sum[i] 을 answer에 다 더해준다. 
이를 반환한다. 
*/
