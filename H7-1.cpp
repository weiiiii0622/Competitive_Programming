#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
#include <utility>
#include <iomanip>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        vector<pair<int, int>> num;
        int n ,k;
        cin >> n >> k;
        for(int i=0; i<n; i++){
            int temp;
            cin >> temp;
            num.push_back({temp, i});
        }
        sort(num.begin(), num.end());
        int cur, cnt, color=0;
        for(int i=0; i<n; i++){
            cur = num[i].first;
            cnt = 1;
            while(num[i].first == cur){
                if(cnt <= k){
                    num[i].first = color+1;
                    cnt++;
                    color = (color+1)%k;
                }
                else{
                    num[i].first = 0;
                }
                i++;
            }
            i--;
        }
        int i=n-1;
        while(num[i].first != k){
            num[i].first = 0;
            i--;
        }
        sort(num.begin(), num.end(), [](pair<int, int>a, pair<int, int>b){return a.second<b.second;});
        for(int i=0; i<n; i++){
            cout << num[i].first << (i==n-1?'\n':' ');
        }
    }
    return 0;
}