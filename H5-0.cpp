#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    while(cin >> m >> n){
        int remainder[3000]= {0};
        int quotient[3000] = {};
        int remain = m%n, cnt=1, digits;
        while(remain && !remainder[remain]){
            remainder[remain] = cnt;
            quotient[cnt++] = (remain*10)/n;
            remain = (remain*10)%n;
        }

        cout <<m<<"/"<<n<<" = "<<m/n<<".";
        if(remain){
            for(int i=1; i<remainder[remain]; i++){
                cout<<quotient[i];
            }
            cout<<"(";
            for(int i=remainder[remain]; i<=50&&i<cnt; i++){
                cout<<quotient[i];
            }
            cout << (cnt>=50?"...)":")") << "\n";
            digits = cnt-remainder[remain];
        }
        else{
            for(int i=1; i<cnt; i++){
                cout<<quotient[i];
            }
            cout << "(0)\n";
            digits = 1;
        }
        cout << "   " << digits << " = number of digits in repeating cycle\n\n";
    }
    return 0;
}