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
/*
스테이지 수 N만큼 반복해 {클리어하지못한사람/시도한사람}(실패율)을 구한다.
스테이지별 실패율을 구한다음 실패율이 높은 스테이지가 내림차순으로 나오게 정렿한다.
    */
