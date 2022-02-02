#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int len, cnt=0;
bool vis[8];
string str, ans;
vector<string> out;

void solve(int n){
    if(n == len){
        cnt++;
        out.push_back(ans);
        return;
    }
    char cur='\0';
    for(int i=0; i<len; i++){
        if(str[i] != cur && vis[i] == false){
            vis[i] = true;
            ans[n] = str[i];
            cur = str[i];
            solve(n+1);
            vis[i] = false;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> str;
    len = str.length();
    ans = string(len, '\0');
    sort(str.begin(), str.end());
    solve(0);
    cout << cnt << '\n';
    for(auto &x: out){
        cout << x << '\n';
    }
    return 0;
}