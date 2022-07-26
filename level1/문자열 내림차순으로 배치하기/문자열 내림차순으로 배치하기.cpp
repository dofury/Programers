#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(char c1,char c2)
{
    return c1>c2;
}
string solution(string s) {
    string answer = "";
    sort(s.begin(),s.end(),cmp);
    return answer = s;
}
/*
sort 함수를 이용해 내림차순으로 정렬한다.
이를 리턴한다.
*/
