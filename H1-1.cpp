#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long int n, prev, temp, ans=0;
    cin >> n;
    cin >> prev;
    for(int i=1; i<n; i++){
        cin >> temp;
        if(prev > temp){
            ans += prev - temp;
        }
        else{
            prev = temp;
        }
    }

    cout << ans << '\n';
    return 0;
}