#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    int n, f, count=0;
    while(cin >> n >> f){
        count++;
        if(n == 0 && f == 0) break;
        vector<int> sum, quo;
        vector<string> bill(n);
        for(int i=0; i<n; i++){
            cin >> bill[i];
        }
        int carry=0;
        for(int i=1; i<=25; i++){
            int temp=carry;
            bool done = true;
            for(int j=0; j<n; j++){
                if(i <= bill[j].length()){
                    done = false;
                    temp += (bill[j][bill[j].length()-i]-'0');
                }
            }
            if(done == true && temp==0) break;
            sum.push_back(temp%10);
            carry = temp/10;
        }
        int dividend=0;
        for (auto it = sum.rbegin(); it != sum.rend(); it++) {
            dividend = dividend*10 + *it;
            if(dividend>=f){
                quo.push_back(dividend/f);
                dividend = dividend%f;
            }
            else{
                if(quo.size()!=0){
                    quo.push_back(0);
                }
            }
        }
        if(quo.size() == 0){
            quo.push_back(0);
        }
        cout << "Bill #" << count << " costs ";
        for (auto it = sum.rbegin(); it != sum.rend(); it++) {
            cout << *it;
        }
        cout << ": each friend should pay ";
        for (auto it = quo.begin(); it != quo.end(); it++) {
            cout << *it;
        }
        cout << "\n\n";
    }
    return 0;
}