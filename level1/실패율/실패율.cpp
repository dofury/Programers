#include <string>
#include <vector>

using namespace std;

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    
    vector<double> failure(1);
    vector<int> stage;
    //스테이지 만들기
    for(int i = 1; i<=N; i++)
    {
         answer.push_back(i); 
    }
    int stageLen = stages.size();
    int failureStage = 0;
    int noClearMember = 0;
    int clearMember = 0;
    clearMember = stageLen;
    for(int j=1;j<=N;j++)
    {
        failureStage++;
        for(int i =0;i<stageLen;i++)
        {
            if(stages[i] == failureStage) 
                noClearMember +=1;
        }
        failure.push_back((double)noClearMember/clearMember); 
                          
        clearMember -= noClearMember;
        noClearMember = 0;

    }
    //정렬
    for(int i =1; i<=N;i++)
    {
        for(int j=1; j<=N;j++)
        {
            double tempD;
            int tempI;
            if(failure[j] < failure[j+1])
            {
                tempD = failure[j];
                failure[j] = failure[j+1];
                failure[j+1] = tempD;
                tempI = answer[j-1];
                answer[j-1] = answer[j];
                answer[j] = tempI;
            }
        }
    }
            
    return answer;
    
    
}
