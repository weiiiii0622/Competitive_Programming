#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define INF INT_MAX
#define MOD 1000000007

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector<vector<ll>> dp(1000000+5, vector<ll>(2,0));
    dp[1][0] = 1, dp[1][1] = 1;
    for(int i=2; i<=1000001; i++){
        dp[i][0] = (4*dp[i-1][0]%MOD + dp[i-1][1]) % MOD;
        dp[i][1] = (dp[i-1][0] + 2*dp[i-1][1]%MOD) % MOD;
    }
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << (dp[n][0]+dp[n][1]) % MOD << '\n';
    }
    return 0;
}