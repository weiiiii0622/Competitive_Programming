#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define INF INT_MAX

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, sum=0, cnt=0; cin >> n;
    vector<int> coins(n);
    vector<int> dp(100000+5, 0), ans;
    stack<int> stk;
    for(int &i: coins) {cin >> i; sum += i;}
    dp[0] = 1;
    for(int x: coins){
        for(int i=sum; i>=x; i--){
            dp[i] += dp[i-x];
        }
    }
    for(int i=1; i<=sum; i++){
        if(dp[i]) cnt++;
    }
    cout << cnt << '\n';
    for(int i=1; i<=sum; i++){
        if(dp[i]) cout << i << ' ';
    }
    cout << '\n';
    return 0;
}