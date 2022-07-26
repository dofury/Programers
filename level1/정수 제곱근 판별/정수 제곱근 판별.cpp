#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
long long solution(long long n) {
    long long answer = 0;
    long long tmp1,tmp2;
    tmp1 = sqrt(n);
    tmp2 = sqrt(n-1);
    if (tmp1 == tmp2)
    {
        answer = -1;
    }
    else
    {
        answer = (tmp1+1)*(tmp1+1);
    }

    return answer;
}
/*
n이 양의 정수의 제곱일려면 n과 n-1의 제곱근은 달라야한다. 이를 이용해 풀어준다.
math.h에 있는 sqrt 함수를 통해 n과 n-1의 제곱근을 구해준다.
n과 n-1의 제곱근이 같다면 -1을 answer에 넣어 반환한다.
다르다면 (n의 제곱근)에 1을 더한걸 두번 곱해준다.
이를 answer에 넣어 반환한다.
*/
