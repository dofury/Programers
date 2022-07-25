#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    int check = 0;
    vector<int> basket;
    
    for(int i=0;i<moves.size();i++)
    {
        for(int j=0;j<board[0].size();j++)
        {
            if(board[j][moves[i]-1] != 0)
            {
                if(basket.size()>=1)
                    check = basket.back();
                basket.push_back(board[j][moves[i]-1]);
                board[j][moves[i]-1] =0;
                break;
            }
        }
        if(basket.size() >= 2)
        {
            if(check == basket.back())
            {
                basket.pop_back();
                basket.pop_back();
                answer+= 2;
            }
        }
    }
    return answer;
}
/*
이중 반복문을 통해 크레인의 내용물이 담겨있는 이차원 벡터를 접근한다.
moves에 해당하는 위치에서 내용물이 0이 아닌경우(무언가 존재한다) basket 벡터안에 옮기고 반복문을 종료한다.
이를 moves 만큼 반복하고 basket 안에서 바로 옆 내용물끼리 서로 겹치는 게 존재할시 둘다 제거를 한다.
이 때 제거를 한횟수를 리턴한다.
*/
