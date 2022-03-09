#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define INF INT_MAX
#define MOD 1000000007

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, x; cin >> n >> x;
    vector<int> coin(n), dp(1000000+5, 0);
    for(int i=0; i<n; i++){
        cin >> coin[i];
    }
    dp[0] = 1;
    for(auto v: coin){
        for(int i=1; i<=x; i++){
            if(i-v>=0){
                dp[i] = (dp[i]+dp[i-v])%MOD;
            }
        }
    }
    cout << dp[x] << '\n'; 
    return 0;
}