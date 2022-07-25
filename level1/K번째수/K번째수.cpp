#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> temp;
    for(int i=0;i<commands.size();i++)
    {            
        for(int j=0;j<(commands[i][1] - commands[i][0])+1;j++)
        {
            temp.push_back(array[(commands[i][0]-1)+j]);
        }
        sort(temp.begin(), temp.end());
        answer.push_back(temp[commands[i][2]-1]);
        temp.clear();
    }
    return answer;
}
/*
commands에 값대로 자른 벡터를 temp에 넣는다.
temp를 내림차순으로 정렬한다.
commands에 있는 순서의 값을 answer에 추가한다.
이를 반복한다.
*/
