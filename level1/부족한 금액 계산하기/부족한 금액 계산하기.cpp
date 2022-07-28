using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = -1;
    long long sum=0;
    for(int i=1;i<=count;i++)
    {
        sum += i*price;
    }
    if(sum>=money)
        answer = sum -money;
    else
        answer = 0;
    return answer;
}
/*
반복문내에서 증가하는 인덱스i에다가 price를 곱한것을 sum 변수에 더해줍니다. 이때 i는 1부터 count까지 반복합니다.
이를 통해 놀이기구를 count 만큼 탈때 드는 비용을 계산 할 수 있습니다.
sum이 현재 돈보다 크거나 같으면 sum - money를 반환하고
아닌 경우는 0를 반환해줍니다.
*/
