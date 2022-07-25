#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    
    arr.erase(unique(arr.begin(),arr.end()),arr.end());
    
    return arr;
}
/*
arr벡터에서 unique 를 사용해 중복되는 수를 제거한다.
arr를 리턴한다.
*/
