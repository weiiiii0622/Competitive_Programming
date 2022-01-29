#include <iostream>
#include <string>
using namespace std;

void solve(int n){
    string str(n,'0');
    cout << str << '\n';
    int i=1;
    while(i<(1<<n)){
        if(i%2==1){
            str[n-1] = str[n-1]=='1'?'0':'1';
        }
        else{
            int j;
            for(j=n-1; j>=0; j--){
                if(str[j] == '1'){
                    j--;
                    break;
                }
            }
            str[j] = str[j]=='1'?'0':'1';
        }
        cout << str << '\n';
        i++;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    solve(n);
    return 0;
}