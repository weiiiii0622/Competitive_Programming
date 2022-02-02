#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

vector<pair<int, int>> num;

int binary_search(int target, int l, int r){
    if(l>r) return -1;
    int mid = (l+r)/2;
    if(num[mid].first == target) return num[mid].second;
    else if(num[mid].first > target) return binary_search(target, l, mid-1);
    else return binary_search(target, mid+1, r);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, x;
    vector<int> pos;

    cin >> n >> x;
    for(int i=1; i<=n; i++){
        pair<int, int> temp;
        cin >> temp.first;
        temp.second = i;
        num.push_back(temp);
    }
    sort(num.begin(), num.end());
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int sum = num[i].first+num[j].first;
            if(x-sum > 0){
                int loc = binary_search(x-sum, j+1, n-1);
                if(loc != -1){
                    pos.push_back(num[i].second);
                    pos.push_back(num[j].second);
                    pos.push_back(loc);
                    sort(pos.begin(), pos.end());
                    cout << pos[0] << ' ' << pos[1] << ' ' << pos[2] <<'\n';
                    return 0;
                }
            }
        }
    }
    cout << "IMPOSSIBLE\n";
    return 0;
}