#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
#include <utility>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t, l, r;
    ll ans;
    cin >> t;
    while(t--){
        cin >> l >> r;
        ans = 0;
        ans += (r-l);
        while(l || r){
            l = l/10;
            r = r/10;
            ans += (r-l);
        }
        cout << ans << '\n';
    }
    return 0;
}