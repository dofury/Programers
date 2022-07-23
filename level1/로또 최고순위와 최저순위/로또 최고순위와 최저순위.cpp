#include <string>
#include <vector>

using namespace std;

int lank(int zeroCount, int count)
{
    int lank =0;
    if(zeroCount+count < 2)
        lank = 6;
    else
        lank = 7-(zeroCount+count); 
    return lank;
               
}
vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int zeroCount = 0;
    int count = 0;
    for(int i=0;i<lottos.size();i++) // 0 갯수
    {
        if(lottos[i] == 0)
            zeroCount++;
    }
    for(int i=0;i<lottos.size();i++)
    {
        for(int j=0;j<lottos.size();j++)
        {
            if(lottos[i] == win_nums[j])
                count++;
        }
    }
    switch(count)
    {
        case 0:
            {
                answer.push_back(lank(zeroCount,0));
                answer.push_back(6);
                break;
            }
        case 1:
            {
                answer.push_back(lank(zeroCount,1));
                answer.push_back(6);
                break;
            }
        case 2:
            {
                answer.push_back(lank(zeroCount,2));
                answer.push_back(5);
                break;
            }
        case 3:
            {
                answer.push_back(lank(zeroCount,3));
                answer.push_back(4);
                break;
            }   
        case 4:
            {
                answer.push_back(lank(zeroCount,4));
                answer.push_back(3);
                break;
            }
        case 5:
            {
                answer.push_back(lank(zeroCount,5));
                answer.push_back(2);
                break;
            }
        case 6:
            {
                answer.push_back(lank(zeroCount,6));
                answer.push_back(1);
                break;
            }
    }
    return answer;
}
/*
알아볼수없는 번호의 갯수를 구한다.
알아볼수없는 번호를 제외한 번호와 1등번호를 비교해서 일치하면 카운트한다.
일치할카운트 수에따라 일치하는 스위치를 문을 간다.
알아볼수없는 번호가 다틀릴 경우를 최저순위를 계산해주는 랭크함수를 통해 경우에 맞게 정답에 최고 순위, 최저순위 를 추가한다.
*/
