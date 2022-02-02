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

    int n;
    vector<int> num;
    cin >> n;
    num.push_back(0);
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        num.push_back(temp);
    }

    map<int, int> lastseen;
    int len=0, l=1, r=1;
    while(r<=n){
        l = max(l, lastseen[num[r]]+1);
        len = max(len, r-l+1);
        lastseen[num[r]] = r;
        r++;
    }
    cout << len << '\n';
    return 0;
}