#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, x;
    cin >> n >> x;
    long long ans=0, sum[n];
    cin >> sum[0];
    for(int i=1; i<n; i++){
        cin >> sum[i];
        sum[i] += sum[i-1];
    }

    for(int i=-1; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(i == -1){
                if(sum[j] == x){
                    ans++;
                    break;
                }
            }
            else{
                if(sum[j]-sum[i] == x){
                    ans++;
                    break;
                }
            }
        }
    }

    cout << ans << '\n';
    return 0;
}