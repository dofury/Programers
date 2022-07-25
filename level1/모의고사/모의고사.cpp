#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<vector<int>> player = {
        {5,1,2,3,4},
        {5,2,1,2,3,2,4,2},
        {5,3,3,1,1,2,2,4,4,5}
    };
    vector<int> playerCorrect = {0,0,0};
    int temp = 0;
    int question = answers.size();
    for(int i=1;i<=question;i++)//1번 수포자 알고리즘
    {
        if(player[0][i%5] == answers[i-1])
            playerCorrect[0]++;
    }
    for(int i=1;i<=question;i++)//2번 수포자 알고리즘
    {
        if(player[1][i%8] == answers[i-1])
            playerCorrect[1]++;
    }    
    for(int i=1;i<=question;i++)//3번 수포자 알고리즘
    {
        if(player[2][i%10] == answers[i-1])
            playerCorrect[2]++;
    }
    temp = max(playerCorrect[0],playerCorrect[1]);
    if( temp == playerCorrect[0])
    {
        temp = max(playerCorrect[0],playerCorrect[2]);
        if(temp == playerCorrect[0])
            temp = 0;
        else
            temp = 2;
    }
    else if( temp == playerCorrect[1])
    {
        temp = max(playerCorrect[1],playerCorrect[2]);
        if(temp == playerCorrect[1])
            temp = 1;
        else
            temp = 2;
    }
    
    for(int j=0.;j<playerCorrect.size();j++)// 공동 1등 수포자 찾기
    {
        if(playerCorrect[temp] == playerCorrect[j])
            answer.push_back(j+1);
    }
    
    for(int i =0; i<playerCorrect.size();i++)
    {
        cout << playerCorrect[i] << endl;
    }
    return answer;
}
/*
1번부터 3번까지의 수포자들의 알고리즘으로 답과 비교해서 맞춘 문제수를 playerCorrect 벡터에 저장한다.
큰수찾기 알고리즘을 통해 가장 많이맞춘 사람을 찾는다.
맞춘문제수가 같은 사람이 있을수 있으므로 1등과 같으면 answer 벡터에 추가한다.
*/
