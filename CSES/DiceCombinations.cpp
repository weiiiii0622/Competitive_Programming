#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <algorithm>
#include <utility>
#include <iomanip>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    vector<ll> dp(1000000 + 9);
    dp[0]=0;
    for(int i=1; i<=6; i++) dp[i]=1;
    for(int i=2; i<=n; i++){
        for(int j=1; i-j>=1 && j<=6; j++){
            dp[i] = (dp[i]+dp[i-j]%(1000000007))%1000000007;
        }
    }
    cout << dp[n] << '\n';
    return 0;
}