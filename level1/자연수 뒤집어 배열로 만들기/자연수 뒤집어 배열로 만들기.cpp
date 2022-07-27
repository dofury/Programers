#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    int count =0;
    long long temp = n;
    while(temp>10)
    {
        temp /= 10;
        count++;
    }
    temp = n;
    for(int i=0;i<count+1;i++)
    {
        answer.push_back(temp%10);
        temp = temp/10;
    }
    cout << count;
    return answer;
}
/*
숫자n을 10으로 나눈 나머지가 곧 각자리 숫자이므로 이를 반복해 전부 분리해 순서대로 answer 벡터에 추가하면된다.
*/
