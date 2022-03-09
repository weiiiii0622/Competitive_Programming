#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define INF INT_MAX

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a, b; cin >> a >> b;
    vector<vector<int>> dp(a+5, vector<int>(b+5, INF));
    for(int i=1; i<=a; i++){
        for(int j=1; j<=b; j++){
            if(i != j){
                for(int k=1; k<i; k++){
                    dp[i][j] = min(dp[i][j], dp[k][j]+dp[i-k][j]+1);
                }
                for(int k=1; k<j; k++){
                    dp[i][j] = min(dp[i][j], dp[i][k]+dp[i][j-k]+1);
                }
            }
            else{
                dp[i][j] = 0;
            }
        }
    }
    cout << dp[a][b] << '\n';
    return 0;
}