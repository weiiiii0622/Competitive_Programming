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
    bool moved[200001] = {false};
    vector<int> top;
    cin >> n >> m;
    for(int i=0; i<m; i++){
        int temp;
        cin >> temp;
        top.push_back(temp);
    }
    for(auto x = top.rbegin(); x!=top.rend(); x++){
        if(!moved[*x]){
            cout << *x << '\n';
            moved[*x] = true;
        }
    }
    for(int i=1; i<=n; i++){
        if(!moved[i]){
            cout << i << '\n';
        }
    }
    return 0;
}