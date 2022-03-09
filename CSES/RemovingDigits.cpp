#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define INF INT_MAX

int solve(int n){
    int max = n%10;
    while(n!=0){
        if(n%10 > max) max=n%10;
        n/=10;
    }
    return max;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, d; cin >> n;
    vector<int> dp(1000000+6, 0);
    for(int i=1; i<=n; i++){
        d = solve(i);
        if(i-d==0) dp[i]=1;
        dp[i] = dp[i-d]+1;
    }
    cout << dp[n] << '\n';
    return 0;
}