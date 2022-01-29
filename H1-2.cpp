#include <iostream>
using namespace std;

void solve(int n){
    int ans=0;
    for(int i=5; n/i>=1; i*=5){
        ans += n/i;
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    solve(n);
    return 0;
}