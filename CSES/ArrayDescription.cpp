#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define INF INT_MAX
#define MOD 1000000007

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m; cin >> n >> m;
    vector<int> num(n+5);
    for(int i=0; i<n; i++) cin >> num[i];
    vector<vector<int>> dp(n+5, vector<int>(105, 0));
    if(num[0]==0){
        for(int i=1; i<=m; i++){
            dp[0][i] = 1;
        }
    }
    else{
        dp[0][num[0]] = 1;
    }
    for(int i=1; i<n; i++){
        if(num[i]!=0){
            for(int j:{num[i]+1,num[i],num[i]-1}){
                if(j>=1 && j<=m){
                    (dp[i][num[i]] += dp[i-1][j]) %= MOD;
                }
            }
        }
        else{
            for(int j=1; j<=m; j++){
                for(int k:{j-1,j,j+1}){
                    if(k>=1 && k<=m){
                        (dp[i][j] += dp[i-1][k]) %= MOD;
                    }
                }
            }
        }
    }
    int ans=0;
    for(int j=1; j<=m; j++){
        (ans += dp[n-1][j]) %= MOD;
    }
    cout << ans << '\n';
    return 0;
}