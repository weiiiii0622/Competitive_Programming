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

    vector<int> num;
    int temp;
    while(cin >> temp){
        num.insert(lower_bound(num.begin(), num.end(), temp), temp);
        int mid = (num.size()/2);
        cout << (num.size()%2==0?(num[mid]+num[mid-1])/2:num[mid]) << '\n';
    }

    return 0;
}