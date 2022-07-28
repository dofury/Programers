#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    vector<vector<int>> one;
    vector<vector<int>> two;
    string line = "";
    
    for(int i=0;i<arr1.size();i++)//이차원 벡터에 이진수로 변환해 넣는 알고리즘
    {
        vector<int> temp;
        while(1)
        {
            temp.push_back(arr1[i] %2);
            if(arr1[i] / 2 == 0)
            {
                for(int j =one.size();j<n;j++)//빈자리 매꾸는 용도
                {
                    temp.push_back(0);
                }
                break;
            }
            else
                arr1[i] /= 2;
        }
        one.push_back(temp);
        temp.clear();
        while(1)
        {
            temp.push_back(arr2[i] %2);
            if(arr2[i] / 2 == 0)
            {
                for(int j =two.size();j<n;j++)//빈자리 매꾸는 용도
                {
                    temp.push_back(0);
                }
                break;
            }
            else
                arr2[i] /= 2;
        }
        two.push_back(temp);
        temp.clear();     
    }
    for(int i =0;i<n;i++)
    {
        for(int j=n-1;j>=0;j--)
        {
            if(one[i][j] == 0 && two[i][j] == 0)
                line+= " ";
            else
                line+= "#";
        }
        answer.push_back(line);
        line = "";
    }
    return answer;
}
/*
2차원 벡터를 지도가 두개이니 두개만든다.
2차원벡터 각영역에 2진수로 바꿔 집어넣는다.
반복문을 통해 2차원 벡터 두개를 비교해 둘다 0일경우에만 line 변수에 공백을 더한다.
아닌경우에는 line 변수에 #을 더한다
answer 벡터에 line 변수를 추가한다.
이를 반복해서 반환한다.
*/
