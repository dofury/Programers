#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer(id_list.size(),0);
    
    unordered_map<string,unordered_set<string>> report_hash;
    unordered_map<string,unordered_set<string>> result_hash;
    
    for(string &s : report)
    {
        int pos = s.find(' ');
        string reporter = s.substr(0,pos);
        string report = s.substr(pos+1);
        report_hash[reporter].insert(report);
        result_hash[report].insert(reporter);
    }
    for(int i=0;i<id_list.size();i++)
    {
        auto it = report_hash.find(id_list[i]);
        if(it == report_hash.end()) continue;
        for(string report : it->second) {
            if(result_hash[report].size() >= k)
            {
                answer[i]++;
            }
        }
    }
    
    
    return answer;
}
/*
map을 통해 키와 값의 구조를 가진다. 값은 또 set를 넣어 중복을 방지한다.
report에서 공백을 찾아 앞에건 키 뒤에건 값으로 넣어준다.
반복문을 통해 id_list[i]를 report_hash에서 찾고 없으면 반복문을 continue 한다.
있는 경우 report_hash에 두번째값을 가져와서 result_hash의 키로 접근해 신고당했는지 확인후
신고 당했으면 신고메일을 받은 횟수인 answer[i]를 증가시켜준다.
*/
