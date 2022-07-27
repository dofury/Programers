#include <string>
#include <vector>

using namespace std;

int solution(int left, int right) {
    int answer = 0;
    vector<bool> negative;
    vector<int> amount;
    int count = 0;
    int temp = left;
    for(int i=left;i<=right;i++) // 약수의 개수 세서 amount에 추가하는 알고리즘
    {
        negative.push_back(false);
        amount.push_back(0);
        for(int j=1;j<=i;j++)
        {
            
            if(i%j == 0)
                amount[count]++;
        }
        count++;
    }
    
    for(int i=0;i<count;i++)// amount에 홀수 벡터를 찾아 음수로 선언한다.
    {
        if(amount[i] % 2 == 1)
            negative[i] = true;
        if(negative[i] == false)
            answer += temp;
        else
            answer += (0-temp);
        temp++;
    }
    
    return answer;
}

/*
반복문을 통해 left 부터 right 까지 1부터 나눠서 나누어 떨어지는지 판단해 약수의 개수를 센다.
amount 벡터중에서 홀수를 찾아서 같은 인덱스위치에 있는 negative 벡터를 true로 바꾼다.
negative 벡터가 true 라면 음수로 계산하고 false 양수로 계산해 answer에 더한다음 반환한다.
*/
