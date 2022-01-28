#include <iostream>
using namespace std;

void solve(int);

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}

void solve(int n){
    int digits=0, temp = n;
    while(temp>0){
        temp = temp/10;
        digits += 1;
    }

    int ans = n-9*digits>0?n-9*digits:0;
    
    while(ans <= n){
        temp = ans; 
        int generator = ans;
        for(int i=0; i<digits; i++){
            generator += temp%10;
            temp = temp/10;
        }
        if(generator == n){
            cout << ans << '\n';
            return;
        }
        ans += 1;
    }
    cout << 0 << '\n';
}