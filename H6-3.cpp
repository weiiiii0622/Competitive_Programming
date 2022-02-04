#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
#include <utility>
#include <cctype>
#include <sstream>
using namespace std;

int n=0, m, ans;
vector<string> map;
bool vis[100][100];
int dir[8][2] = {{-1,-1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};

int IsValid(int i, int j){
    if(i<n&&i>=0&&j<m&&j>=0) return 1;
    else return 0;
}

void dfs(int i, int j){
    if(vis[i][j]) return;
    vis[i][j] = true;
    if(map[i][j] == 'W'){
        ans++;
        for(int a=0; a<8; a++){
            if(IsValid(i+dir[a][0], j+dir[a][1])){
                dfs(i+dir[a][0], j+dir[a][1]);
            }
        }
    }
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t, flag=0, count = 0;
    string input;
    cin >> t;
    while(t--){
        n=0;
        if(flag) cout << '\n';
        flag = 1;

        while(getline(cin, input)){
            if(input.length()==0) continue;
            if(isdigit(input[0])) break;
            map.push_back(input);
            n++;
        }
        m = map[0].length();

        int i, j;
        while(input != ""){
            stringstream ss(input);
            ss >> i >> j;
            memset(vis, false, 100*100*sizeof(vis[0][0]));
            ans = 0;
            dfs(i-1, j-1);
            cout << ans << '\n';
            getline(cin, input);
        }
        map.clear();
    }
    return 0;
}