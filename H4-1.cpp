#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cstring>
using namespace std;


int n, m, ans;
vector<int> col;

void binary_search(int target, int l, int r){
    int mid = (l+r)/2;
    if(l > r){
        return;
    }
    if(col[mid] == target){
        ans++;
        return;
    }
    else if(col[mid] < target){
        binary_search(target, mid+1, r);
    }
    else{
        binary_search(target, l, mid-1);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    while(cin >> n >> m){
        col.clear();
        ans=0;
        if(n==0 && m==0) break;
        for(int i=0; i<n; i++){
            int temp;
            cin >> temp;
            col.push_back(temp);
        }
        sort(col.begin(), col.end());
        for(int i=0; i<m; i++){
            int temp;
            cin >> temp;
            binary_search(temp, 0, n-1);
        } 
        cout << ans << '\n';
    }
    return 0;
}