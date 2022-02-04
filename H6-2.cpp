#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
#include <utility>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    while(cin >> n && n){
        int temp;
        while(cin >> temp && temp){
            stack<int> in;
            queue<int> out;
            out.push(temp);
            for(int i=1; i<n; i++){
                cin >> temp;
                out.push(temp);
            }
            for(int i=1; i<=n; i++){
                in.push(i);
                while(!in.empty() && in.top()==out.front()){
                    in.pop();
                    out.pop();
                }
            }
            cout << (in.empty()?"Yes":"No") << '\n';
        }
        cout << '\n';
    }
    return 0;
}