#include <string>
#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

int solution(string s) {
    int answer = 0;
    int index=0;
    vector<int> number;
    string buffer;
    for(char &c : s)
    {
        if(isdigit(c) == true)
            number.push_back(c - '0');
        else
        {
            buffer+= c;
            if(buffer == "zero")
            {
                number.push_back(0);
                buffer = "";    
            }
            if(buffer == "one")
            {
                number.push_back(1);
                buffer = "";    
            }
                    
            if(buffer == "two")
            {
                number.push_back(2);
                buffer = "";    
            }
                    
            if(buffer == "three")
            {
                number.push_back(3);
                buffer = "";   
            }
                    
            if(buffer == "four")
            {
                number.push_back(4);
                buffer = "";   
            }
                    
            if(buffer == "five")
            {
                number.push_back(5);
                buffer = "";   
            }
                    
            if(buffer == "six")
            {
                number.push_back(6);
                buffer = "";   
            }
                    
            if(buffer == "seven")
            {
                number.push_back(7);
                buffer = "";   
            }
                    
            if(buffer == "eight")
            {
                number.push_back(8);
                buffer = "";   
            }
                    
            if(buffer == "nine")
            {
                number.push_back(9);
                buffer = "";   
            }  
        }
    }
    index = number.size()-1;
    for(int i=0;i<number.size();i++)
    {
        answer += number[i] * pow(10,index--);
    }
    return answer;
}
/*
s에서 문자를 하나씩 받아와서 반복합니다.
s가 숫자면 number 벡터에 추가합니다.
s가 문자면 buffer 변수에 하나씩 추가하고 유효한 문자열이 완성되면 그에 대응하는 숫자를 추가하고 buffer를 비워줍니다.
숫자로 변환이 끝난뒤 answer에 number에 있는 수들을 자릿수에 맞게 10를 곱해서 더해줍니다.
*/
