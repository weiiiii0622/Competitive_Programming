#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define INF INT_MAX

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    vector<int> coins(n);
    vector<int> dp(100000+5, 0), ans;
    stack<int> stk;
    for(int &i: coins) {cin >> i;}

    for(int x: coins){
        for(int i=1; i<=1000*n; i++){
            if(i-x>=0){
                if(dp[i-x]) stk.push(i);
            }
        }
        dp[x] = 1;
        while(!stk.empty()){
            int t = stk.top(); stk.pop();
            dp[t] = 1;
            
        }
    }
    for(int i=1; i<=1000*n; i++){
        if(dp[i]){
            ans.emplace_back(i);
        }
    }
    int size = ans.size();
    cout << size << '\n';
    for(int i=0; i<size; i++){
        if(i!=size-1){
            cout << ans[i] << ' ';
        }
        else{
            cout << ans[i] << '\n';
        }
    }
    return 0;
}