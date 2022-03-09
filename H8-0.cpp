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

    int n;
    while(cin >> n && n){
        vector<int>a, b;
        int cnt=0, ans_a=0, ans_b=0;
        while(n!=0){
            int cur = n%2;
            if(cur == 1){
                cnt++;
                if(cnt%2==1){
                    a.push_back(1);
                    b.push_back(0);
                }
                else{
                    a.push_back(0);
                    b.push_back(1);
                }
            }
            else{
                a.push_back(0);
                b.push_back(0);
            }
            n /= 2;
        }
        for(auto x=a.rbegin(); x!=a.rend(); x++){
            ans_a = ans_a*2+(*x);
        }
        for(auto x=b.rbegin(); x!=b.rend(); x++){
            ans_b = ans_b*2+(*x);
        }
        cout << ans_a << ' ' << ans_b << '\n';
    }

    return 0;
}