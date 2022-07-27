#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    for(int i=0;i<arr1.size();i++)
    {
        vector<int> temp;
        for(int j=0;j<arr1[0].size();j++)
        {
            temp.push_back(arr1[i][j]+arr2[i][j]);
        }
        answer.push_back(temp);
        temp.clear();
    }
    return answer;
}
/*
행렬이 같은 arr1,arr2 벡터를 더하기 위해선
반복문 안에 temp vector를 만들어 arr1, arr2 요소를 더한 값을 담는다.
answer 벡터에 temp 벡터를 추가한다.
answer를 반환한다.
*/
