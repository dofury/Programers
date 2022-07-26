#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    double sum = 0;
    for(int i=0;i<arr.size();i++)
    {
        sum += arr[i];
    }
    answer = (double)sum/arr.size();
    return answer;
}
/*
sum 변수에 arr벡터의 요소들을 반복문을 돌려 전부더한다.
anwer에 sum의 값/ 요소들의 갯수 를 통해 평균을 구한값을 넣는다.
이를 리턴한다.
*/
