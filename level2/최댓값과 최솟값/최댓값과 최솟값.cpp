#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    string buffer = "";
    vector<int> numbers;
    int max = 0;
    int min = 0;
    bool negative = false;
    for (char& c : s)
    {
        if (isdigit(c) != 0)
        {
            buffer += c;
        }
        if ((negative == false) && (c == ' '))
        {
            numbers.push_back(stoi(buffer));
            buffer = "";
        }
        if (negative == true && (c == ' '))
        {
            numbers.push_back(0 - stoi(buffer));
            negative = false;
            buffer = "";
        }
        if (c == '-')
            negative = true;
        if ((negative == false) && (& c - &*s.begin() == s.size() - 1))
        {
            numbers.push_back(stoi(buffer));
            buffer = "";
        }
        if ((negative == true) && (&c - &*s.begin() == s.size() - 1))
        {
            numbers.push_back(0- stoi(buffer));
            buffer = "";
        }
    }
    max = numbers[0];
    min = numbers[0];
    for (int& i : numbers)
    {
        if (max < i)
            max = i;
        if (min > i)
            min = i;
    }
    answer = to_string(min) + ' ' + to_string(max);
    cout << answer;
    return answer;
}
/*
s에서 하나씩 반복문으로 읽어들인다.
'-' 라면 음수 체크 negative를 true 하고
다음 c가 ' '일때 까지 buffer에 추가한다.
' '라면 버퍼를 numbers 벡터에 추가한다.
(&c - &*s.begin() == s.size() - 1)를 통해 마지막인 경우에도 값이 추가될 수 있도록 한다.
numbers 벡터에 값이 들어갔으므로 대소비교 알고리즘을 통해 최댓값과 최솟값을 구한뒤 이를 answer에 더해서 반환한다.
*/
