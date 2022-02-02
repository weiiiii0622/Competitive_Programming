#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int ex_pow(int x, int y, int n){
    if(x == 0) return 0;
    if(y == 0) return 1;

    int res;
    if(y%2==0){
        int c = ex_pow(x, y/2, n);
        return res = (c*c)%n;
    }
    else{
        int c = ex_pow(x, y-1, n);
        return res = (x*c)%n;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        int x, y, n;
        cin >> x >> y >> n;
        int ans= 1;
        cout << ex_pow(x, y, n) << '\n';
    }
    return 0;
}