#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define INF INT_MAX

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    string a, b; cin >> a >> b;
    int sa = a.size(), sb = b.size();
    vector<vector<int>> dp(5000+5, vector<int>(5000+5, 0));
    for(int i=1; i<=sa; i++) dp[i][0] = i;
    for(int i=1; i<=sb; i++) dp[0][i] = i;

    for(int i=1; i<=sa; i++){
        for(int j=1; j<=sb; j++){
            if(a[i-1]==b[j-1])dp[i][j] = dp[i-1][j-1];
            else{
                dp[i][j] = min({dp[i][j-1], dp[i-1][j], dp[i-1][j-1]}) + 1;
            }
        }
    } 
    cout << dp[sa][sb] << '\n';
    return 0;
}