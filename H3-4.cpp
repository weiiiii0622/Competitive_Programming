#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    int n;
    cin >> n;
    while(n--){
        string a, b;
        vector<int> sum;
        cin >> a >> b;
        int carry=0;
        for(int i=0; i<205; i++){
            bool done = true;
            int temp=carry;
            if(i<a.length()){
                done = false;
                temp += a[i]-'0';
            }
            if(i<b.length()){
                done = false;
                temp += b[i]-'0';
            }
            if(done == true && temp == 0) break;
            if(sum.size() == 0 && temp%10 == 0){
                carry = temp/10;
            }
            else{
                sum.push_back(temp%10);
                carry = temp/10;
            }

        }
        if(sum.size() == 0){
            sum.push_back(0);
        }
        for(auto &x: sum){
            cout << x;
        }
        cout << '\n';
    }
    return 0;
}