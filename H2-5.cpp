#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, num, pos[200002], ans=1;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> num;
        pos[num]=i;
    }
    for(int i=2; i<=n; i++){
        if(pos[i]<pos[i-1]){
            ans++;
        }
    }
    cout << ans << '\n';
    return 0;
}