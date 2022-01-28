#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t, s, d;
    cin >> t;
    while(t--){
        cin >> s >> d;
        if(s-d<0 || (s-d)%2!= 0){
            cout << "impossible\n";
        }
        else{
            cout << (s+d)/2 << " " << (s-d)/2 << '\n';
        }
    }
    return 0;
}