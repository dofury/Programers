#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    vector<int> monthStart;
    int index = 5; // 1/1 금요일
    // 30 4 6 9 11
    // 31 1 3 5 7 8 10 12
    // 29 2
    monthStart.push_back(index); //1월 추가
    for(int i =1;i<=11;i++) // 끝나는 요일 찾기
    {
        if( i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
        {
            for(int j = 1; j<=31; j++)
            {
                if(index == 6)
                    index = 0;
                else
                    index++;
            }
            monthStart.push_back(index); //월 추가 
        }
        if(i == 4 || i == 6 || i == 9 || i == 11)
        {
            for(int j = 1; j<=30; j++)
            {
                if(index == 6)
                    index = 0;
                else
                    index++;
            }
            monthStart.push_back(index); //월 추가 
        }
        if( i == 2)
        {
             for(int j = 1; j<=29; j++)
            {
                if(index == 6)
                    index = 0;
                else
                    index++;
            }
            monthStart.push_back(index); //월 추가    
        }
    }
    index = monthStart[a-1];
    for(int i =1;i<=b;i++)
    {
    if(index == 6)
        index = 0;
    else
        index++; 
    }
    if(index == 0)
        index = 6;
    else
        index--;
    switch(index)
    {
        case 0:
            {
                answer = "SUN";
                break;
            }
        case 1:
            {
                answer = "MON";
                break;
            }
        case 2:
            {
                answer = "TUE";
                break;
            }
        case 3:
            {
                answer = "WED";
                break;
            }
        case 4:
            {
                answer = "THU";
                break;
            }
        case 5:
            {
                answer = "FRI";
                break;
            }
        case 6:
            {
                answer = "SAT";
                break;
            }
    }
    for(int i = 0; i<12;i++)
    {
        cout << monthStart[i] << endl;
    }
    return answer;
}
/*
반복문을 돌려 매달 1일이 무슨 요일인지 찾는다.
찾는 달이 29일인지 30,31 인지에 따라 반복문을 다르게 돌리고
찾는 날까지 반복한다음 인덱스를 요일로 변환하고 answer에 넣어 반환한다.
*/
