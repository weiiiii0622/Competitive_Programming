#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define INF INT_MAX

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, x; cin >> n >> x;
    vector<int> h(n+5), s(n+5);
    for(int i=0; i<n; i++) cin >> h[i];
    for(int i=0; i<n; i++) cin >> s[i];
    vector<vector<int>> dp(n+5, vector<int>(x+5, 0));
    for(int i=1; i<=n; i++){
        for(int w=0; w<=x; w++){
            dp[i][w] = dp[i-1][w];
            if(h[i-1]<=w)
                dp[i][w] = max(dp[i][w], dp[i-1][w-h[i-1]] + s[i-1]);
        }
    }
    cout << dp[n][x] << '\n';
    return 0;
}