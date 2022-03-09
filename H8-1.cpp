#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <algorithm>
#include <utility>
#include <iomanip>
#define ll long long
using namespace std;

bool cmp(vector<int>&a,vector<int>&b){
    if(a[0]!=b[0]) return a[0]<b[0];
    else return a[1]<b[1];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int w, h;
    while(cin >> w >> h){
        vector<vector<int>> a(6);
        bool done;
        a[0].push_back(min(w, h));
        a[0].push_back(max(w, h));
        for(int i=1; i<=5; i++){
            cin >> w >> h;
            a[i].push_back(min(w, h));
            a[i].push_back(max(w, h));
        }
        sort(a.begin(), a.end(), cmp);
        if(a[0][0]==a[1][0]&&a[0][1]==a[1][1]&&a[2][0]==a[3][0]&&a[2][1]==a[3][1]&&a[4][0]==a[5][0]&&a[4][1]==a[5][1]&&a[0][0]==a[2][0]&&a[0][1]==a[4][0]&&a[2][1]==a[4][1]){
            done = true;
        }
        else{
            done = false;
        }
        cout << (done?"POSSIBLE":"IMPOSSIBLE") << '\n';
    }

    return 0;
}