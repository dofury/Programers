#include <string>
#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

string solution(vector<int> numbers, string hand) {
    string answer = "";
    vector<vector<int>> keypad;
    vector<vector<int>> hands = {{0,3},{2,3}};
    vector<int> distance = {0,0};
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            vector<int> temp;
            temp.push_back(j);
            temp.push_back(i);
            keypad.push_back(temp);
        }
    }
    for(int i=0;i<numbers.size();i++)
    {
        if(numbers[i] == 1 || numbers[i] == 4 || numbers[i] == 7)
        {
            hands[0] = keypad[numbers[i]-1];
            answer.push_back('L');
        }
        else if(numbers[i] == 3 || numbers[i] == 6 || numbers[i] == 9)
        {
            hands[1] = keypad[numbers[i]-1];
            answer.push_back('R');
        }
        else{
            if (numbers[i] == 0)
                numbers[i] = 11;
            distance[0] = abs(keypad[numbers[i]-1][0]-hands[0][0]) + abs(keypad[numbers[i]-1][1]-hands[0][1]);
            distance[1] = abs(keypad[numbers[i]-1][0]-hands[1][0]) + abs(keypad[numbers[i]-1][1]-hands[1][1]);
            if(distance[0] < distance[1])
            {
                hands[0][0] = keypad[numbers[i]-1][0];
                hands[0][1] = keypad[numbers[i]-1][1];
                answer.push_back('L');
            }
            else if(distance[1] < distance[0])
            {
                hands[1][0] = keypad[numbers[i]-1][0];
                hands[1][1] = keypad[numbers[i]-1][1];
                answer.push_back('R');
            }
            else
            {
                if(hand == "right")
                {
                    hands[1][0] = keypad[numbers[i]-1][0];
                    hands[1][1] = keypad[numbers[i]-1][1];
                    answer.push_back('R');
                }
                else
                {
                    hands[0][0] = keypad[numbers[i]-1][0];
                    hands[0][1] = keypad[numbers[i]-1][1];
                    answer.push_back('L');
                }
            }
        }
    }
    return answer;
}
/*
키패드의 좌표를 담고있는 이차원 벡터를 만든다.
키패드가 1,4,7 or 3,6,9 에는 L 이나 R을 출력한다.
0,2,5,8의 경우에는 왼손과 오른손에 현재위치를 저장하는 벡터를 하나 만들어두고
맨하탄 거리 구하는 공식을 이용해 왼손에서와 오른손에서의 거리를 비교한다음 출력한다.
거리가 같은경우는 왼손잡이랑 오른손잡이를 구분한다음 출력한다.
*/
