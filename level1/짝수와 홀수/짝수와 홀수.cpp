#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(int num) {
    string answer = "";
    if(num > 0)
    {
        if(num %2 == 1)
            answer = "Odd";
        else
            answer = "Even";
    }
    else
    {
        if(num %2 == -1)
            answer = "Odd";
        else
            answer = "Even"; 
    }
    
    return answer;
}
/*
num을 2로 나눠 0보다 클 때나머지가 1이면 "Odd"를 answer에 넣는다.
아닌경우 "Even"을 넣는다.
0보다 작은경우 2로 나눠 나머지가 -1이면 "Odd"를 answer에 넣는다.
아닌경우 "Evne"을 넣는다.
이를 반환한다.
*/
