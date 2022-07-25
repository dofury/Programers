#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    vector<int> width;
    vector<int> height;
    
    for(int i=0;i<sizes.size();i++)
    {
        if(sizes[i][0] >= sizes[i][1])
        {
            width.push_back(sizes[i][0]);
            height.push_back(sizes[i][1]);
        }
        else
        {
            height.push_back(sizes[i][0]);
            width.push_back(sizes[i][1]);
        }
    }
    sort(width.begin(),width.end());
    sort(height.begin(),height.end());
    answer = width[width.size()-1]* height[height.size()-1];
    return answer;
    
}
/*
여러 지갑에서 가로와 세로중 큰쪽을 가로 벡터에 넣고 짧은 쪽을 세로벡터에 넣는다.
가로와 세로벡터를 내림차순으로 정렬한다.
가로와 세로벡터중 가장큰 값들을 서로 곱해서 answer에 담아 반환한다.
*/
