#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define INF INT_MAX
#define MOD 1000000000+7

char bd[1000+5][1000+5];
vector<vector<int>> dp(1000+5, vector<int>(1000+5, 0));

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> bd[i][j];
        }
    }
    if(bd[0][0]=='*'){
        cout << 0 << '\n';
        return 0;
    }

    dp[0][0] = 1;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(bd[i][j] == '*') continue;
            if(i-1>=0) dp[i][j]+=dp[i-1][j];
            if(j-1>=0) dp[i][j]+=dp[i][j-1];
            dp[i][j]%=MOD;
        }
    }
    cout << dp[n-1][n-1] << '\n';

    return 0;
}