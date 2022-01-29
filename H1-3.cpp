#include <iostream>
using namespace std;

bool NotPrime[1000005];

void get_prime(){
    NotPrime[0] = true;
    NotPrime[1] = true;

    for(int i=2; i<=1000004; i++){
        if(!NotPrime[i]){
            for(int k=1000004/i, j=i*k; k>=i; k--, j-=i){
                if(!NotPrime[k]){
                    NotPrime[j] = true;
                }
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    get_prime();

    int t;
    cin >> t;
    while(t--){
        int n, e;
        cin >> n >> e;
        long long ans=0, num[n+1];
        for(int i=1; i<=n; i++){
            cin >> num[i];
        }

        for(int i=1; i<=n; i++){
            if(!NotPrime[num[i]]){
                int left=0, right=0;
                for(int k=i-e; k>=1; k-=e){
                    if(num[k]==1){
                        left++;
                    }
                    else{
                        break;
                    }
                }
                for(int k=i+e; k<=n; k+=e){
                    if(num[k]==1){
                        right++;
                    }
                    else{
                        break;
                    }
                }
                ans += (left+1)*(right+1)-1;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}