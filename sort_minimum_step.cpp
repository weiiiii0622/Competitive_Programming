#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>
using namespace std;

void solve(vector<pair<int, int>> &arr, int n){
    vector<pair<int, int>> temp = arr;
    sort(temp.begin(), temp.end());
    int i=0, count=0;

    while(i<n){
        if(temp[i].first == arr[i].first || temp[i].second == i){
            i++;
            continue;
        }
        else{
            swap(temp[i].first, temp[temp[i].second].first);
            swap(temp[i].second, temp[temp[i].second].second);
            if(temp[i].first != arr[i].first){
                i--;
            }
            i++;
            count++;
        }
    }

    cout << count << '\n';
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    pair<int, int> x;
    vector<pair<int, int>> arr;

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x.first;
        x.second = i;
        arr.push_back(x);
    }

    solve(arr, n);
    return 0;
}