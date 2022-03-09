#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <algorithm>
#include <utility>
#include <iomanip>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, k, mid;
    vector<pair<int, int>> num;
    cin >> n >> k;
    for(int i=0; i<k; i++){
        int temp;
        cin >> temp;
        num.push_back({temp, i});
    }
    sort(num.begin(), num.end());
    mid = k%2?k/2:k/2-1;
    cout << num[mid].first << ' ';
    

    return 0;
}