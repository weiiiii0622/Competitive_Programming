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
    bool vis[n+1] = {false};
    for(int i=0; i<n-1; i++){
        int temp;
        cin >> temp;
        vis[temp] = true;
    }
    for(int i=1; i<=n; i++){
        if(!vis[i]){
            cout << i << '\n';
            break;
        }
    }
    return 0;
}