#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
#include <utility>
#include <iomanip>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        ll y, x;
        cin >> y >> x;
        ll m = max(y, x);
        ll ans = m*m-m+1;
        ans += y==m?m%2==0?(m-x):(x-m):m%2==0?(y-m):(m-y);
        cout << ans << '\n';
    }
    return 0;
}