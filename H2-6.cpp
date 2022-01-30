#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <utility>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m, k, v;
    map<int,vector<int>> arr;
    while(cin >> n >> m){
        arr.clear();
        for(int i=1; i<=n; i++){
            int x;
            cin >> x;
            if(!arr.count(x)){
                arr[x] = vector<int>();
            }
            arr[x].push_back(i);
        }
        while(m--){
            cin >> k >> v;
            if(arr.count(v)&&(k<=arr[v].size())){
                cout << arr[v][k-1] << '\n';
            }
            else{
                cout << 0 << '\n';
            }
            
        }
    }
    return 0;
}