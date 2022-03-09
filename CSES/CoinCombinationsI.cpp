#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, x; cin >> n >> x;
    vector<int> coin(n), dp(1000000 + 5, 0);
    for(int i=0; i<n; i++){
        cin >> coin[i];
        dp[coin[i]] = 1;
    }
    for(int i=1; i<=x; i++){
        for(auto v: coin){
            if(i-v>=1 && dp[i-v]!=0){ 
                dp[i] = (dp[i]+dp[i-v])%MOD;
            }
        }
    }
    
    cout << dp[x] << '\n';
    return 0;
}