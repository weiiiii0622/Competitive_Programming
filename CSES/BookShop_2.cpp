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
    vector<int> dp(x+5, 0);
    for(int i=0; i<n; i++){
        for(int w=x; w>=h[i]; w--){
            dp[w] = max(dp[w], dp[w-h[i]]+s[i]);
        }
    }
    cout << dp[x] << '\n';
    return 0;
}