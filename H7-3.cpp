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

    int n;
    while (cin >> n && n){
        priority_queue<int, vector<int>, greater<int>> num;
        for(int i=0; i<n; i++){
            int temp;
            cin >> temp;
            num.push(temp);
        }
        ll cost = 0;
        ll total=0;
        for(int i=0; i<n-1; i++){
            cost = num.top();
            num.pop();
            cost += num.top();
            num.pop();
            total += cost;
            num.push(cost);
        }
        cout << total << '\n';
    }
    return 0;
}