#include <string>
#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    int number = 1;
    int temp = 0;
    vector<int> n3;
    while(1)
    {
        temp = n%3;
        n3.push_back(temp); 
        if(n/3 == 0)
            break;
        n = n/3;
    }
    for(int i= 0;i<n3.size();i++)
    { 
        answer += (pow(3,i) * n3[n3.size()-1-i]);
    }
    cout << n3[3];
    return answer;
}
/*
10진법의 수를 3진법을 변환한다.
3진법의 수를 뒤집는다.
뒤집은 수를 10진법의 수로 다시 변환한다.
*/
