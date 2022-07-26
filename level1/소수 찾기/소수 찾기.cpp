#include <string>
#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<bool> check;
    for (int i = 0; i < n; i++)
    {
        check.push_back(true);
    }
    check[0] = false; //1은 소수x
    for (int i = 2; i <= n; i++)
    {
        if (check[i-1])// 소수라면 246810
        {
            for (int j = 2 * i; j <= n; j += i)
            {
                check[j - 1] = false;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (check[i])
            answer++;
    }

    return answer;
}
/*
1부터 n까지의 소수의 갯수는 에라토스테네스의 채를 이용한 알고리즘으로 풀어야한다.
2의 배수... 3의배수...이런식으로 n까지 하나씩 지워간다.
2가 소수라면 2의배수는 소수가 아니기 때문이다.
check 벡터를 n 만큼 만들고 전부 소수라고 가정해 true 라고 한다.
반복문을 돌려서 소수의 배수는 소수가 아니므로 전부 false로 바꾼다.
반복문을 돌려서 true인 벡터의 개수를 센다음 answer에 반환한다.
*/
