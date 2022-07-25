#include <string>
#include <vector>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    int answer = 0;
    
    vector<int> sum;
    for(int i=0;i<absolutes.size();i++)
    {
        if(signs[i] == true)
            sum.push_back(absolutes[i]);
        else
            sum.push_back(0-(absolutes[i]));
    }
    for(int i=0;i<sum.size();i++)
    {
        answer+=sum[i];
    }
    return answer;
}
/*
음양수로 변환해서 담을 sum 벡터 만든다.
signs[i] true 일시 그대로 sum 벡터에 추가하고 false 0에서 뺸값으로 음수화 시켜 추가한다.
반복문을 통해 sum벡터에 모든 수을 더한다음 answer에 담아 반환한다.
*/
