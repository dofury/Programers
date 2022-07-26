#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int temp = 0;
    int n1,n2;
    if(n > m) // 대소고정(n<m)
    {
        temp = n;
        n = m; 
        m = temp; 
    }
    n1 = n;
    n2 = m;
    while(n2%n1 !=0)
    {
        temp = n1;
        n1 = n2%n1;
        n2 = temp;

    }
    answer.push_back(n1);   
    answer.push_back(m*n/n1);
    
    return answer;
}
/*
n과 m중 m이 항상 더크게 위치를 바꿔준다.
최소공배수와 최대공약수를 구하는 공식을 통해 구해준다.
answer에 최대공약수, 최소공배수 순으로 추가해준다.
이를 리턴한다.
*/
