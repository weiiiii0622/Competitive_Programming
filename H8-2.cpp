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

    ll t, n, l, r, cnt;
    vector<ll> num;
    cin >> t;
    while(t--){
        cnt = 0;
        num.clear();
        cin >> n >> l >> r;
        for(int i=0; i<n; i++){
            ll temp;
            cin >> temp;
            num.push_back(temp);
        }
        sort(num.begin(), num.end());
        int a=0;
        while(a<n-1){
            auto l_bd = lower_bound(num.begin()+a+1, num.end(), l-num[a]);
            auto r_bd = upper_bound(num.begin()+a+1, num.end(), r-num[a]);
            cnt += r_bd-l_bd;
            a++;
        }
        cout << cnt << '\n';
    }
    return 0;
}