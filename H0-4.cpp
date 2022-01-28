#include <iostream>
#include <string>
using namespace std;

int solve(string& l, string& s){
    for(int i=0; i<l.length(); i++){
        int j=0;
        while((l[i+j]-'0'+s[j]-'0')<=3 && (i+j<l.length()&&j<s.length())){
            j++;
        }
        if(i+j==l.length() || j == s.length()){
            return (l.length()>i+s.length()?l.length():i+s.length());
        }
    }
    return l.length()+s.length();
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    string top, bottom;
    while(cin >> bottom){
        if(bottom[0]=='q')break;
        int ans_r, ans_l;
        cin >> top;
        ans_r = solve(top, bottom);
        ans_l = solve(bottom, top);
        cout << (ans_r<=ans_l?ans_r:ans_l) << '\n';
    }
    return 0;
}