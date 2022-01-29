#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, x;
    cin >> n >> x;
    long long ans=0, num[n];
    cin >> num[0];
    for(int i=1; i<n; i++){
        cin >> num[i];
    }

    long long sum=0;
    int r=0, l=0;
    while(r<n){
        sum += num[r];
        while (sum >= x){
            if(sum == x){
                ans++;
            }
            sum -= num[l];
            l++;
        }
        r++;
    }

    cout << ans << '\n';
    return 0;
}