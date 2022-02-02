#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> num;
    for(int i=1; i<=n; i++){
        pair<int, int> temp;
        cin >> temp.first;
        temp.second = i;
        num.push_back(temp);
    }
    sort(num.begin(), num.end());
    int l=0, r=n-1;
    while(l<r){
        if(num[l].first + num[r].first == x){
            cout << min(num[l].second, num[r].second) << ' ' << max(num[l].second, num[r].second) << '\n';
            break;
        }
        else if(num[l].first + num[r].first > x) r--;
        else l++;
    }
    if(l == r) cout << "IMPOSSIBLE\n";
    return 0;
}