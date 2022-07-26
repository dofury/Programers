#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(int n1,int n2){
    return n1 > n2;
}
vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int minIndex = 0;
    if(arr.size() == 1)
        answer.push_back(-1);
    else
    {
        for(int i =0;i<arr.size();i++)
        {
            if(arr[i] < arr[minIndex])
                minIndex = i;
        }
        arr.erase(arr.begin() + minIndex);
        answer = arr;
    }
    return answer;
}
/*
작은 수의 인덱스를 저장하는 minIndex 변수를 만든다.
변수의 길이가 1이라면 -1을 추가하고 리턴한다.
반복문을 돌려 if문을 통해 작은수 인덱스를 계속 갱싱한다.
arr벡테의 erase함수를 통해서 minIndex 자리의 벡터 하나를 지운다.
이를 answer에 담아 리턴한다.
*/
