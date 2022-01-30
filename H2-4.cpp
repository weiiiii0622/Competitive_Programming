#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    string str1, str2;
    while(cin >> str1 >> str2){
        int len1=str1.length(), len2=str2.length();
        int i=0, j=0;
        while(j<len2){
            if(str1[i] == str2[j]){
                i++;
            }
            j++;
        }
        if(i == len1){
            cout << "Yes\n";
        }
        else{
            cout << "No\n";
        }
    }
    return 0;
}