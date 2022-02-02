#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<pair<int, int>> job, sol;
    for(int i=0; i<n; i++){
        pair<int ,int> temp;
        cin >> temp.first >> temp.second;
        job.push_back(temp);
    }

    sort(job.begin(), job.end(), [](pair<int ,int> a, pair<int ,int> b){ return a.second < b.second; });
    int end_time=0;
    for(int i=0; i<n; i++){
        if(job[i].first >= end_time){
            sol.push_back(job[i]);
            end_time = job[i].second;
        }
    }
    cout << sol.size() << '\n';
    return 0;
}