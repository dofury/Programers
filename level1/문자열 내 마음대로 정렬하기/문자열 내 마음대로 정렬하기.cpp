#include <string>
#include <vector>
#include <iostream>
#include <cstring>
#include <algorithm>
int N;
using namespace std;
bool cmp(string s1, string s2)
{
    if(s1[N] == s2[N])
    {
        return s1 < s2;
    }
    return s1[N] < s2[N];
}
vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    N = n;
    sort(strings.begin(),strings.end(),cmp);
    return answer = strings;
}
/*
sort함수를 통해 s1[n]과 s2[n] 중 더 사전적으로 앞에 오는걸 앞게 오게한다.
이를 반환한다.
*/
