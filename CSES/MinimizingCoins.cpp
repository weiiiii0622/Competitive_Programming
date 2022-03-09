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
#define INF 999999999
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, x; cin >> n >> x;
    vector<int> coin(n), dp(1000000+5, INF);
    for(int i=0; i<n; i++){
        cin >> coin[i];
        dp[coin[i]] = 1;
    }
    for(int i=1; i<=x; i++){
        for(auto m: coin){
            if(i-m<1) continue;
            if(dp[i-m]<INF){
                dp[i] = min(dp[i], dp[i-m] + 1);
            }
        }
    }
    cout << (dp[x]==INF?-1:dp[x]) << '\n';
    return 0;
}