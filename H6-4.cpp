#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
#include <utility>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, max=0, cnt=0;
    vector<pair<int, int>> time;
    cin >> n;
    for(int i=0; i<n; i++){
        pair<int, int> a, b;
        cin >> a.first >> b.first;
        a.second = 1;
        b.second = -1;
        time.push_back(a);
        time.push_back(b);
    }
    sort(time.begin(), time.end(), [](pair<int, int> a, pair<int, int> b){return a.first<b.first;});

    for(auto &x: time){
        cnt += x.second;
        max = cnt>max?cnt:max;
    }

    cout << max << '\n';
    return 0;
}