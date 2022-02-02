#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    bool vis[200001] = {false};
    int n, flag=0, i=0, kill=0;
    cin >> n;
    while(kill < n){
        if(!vis[i]&&flag==0){
            flag = 1;
        }
        else if(!vis[i]&&flag==1){
            flag = 0;
            kill++;
            vis[i] = true;
            cout << i+1;
            cout << (kill==n?'\n':' ');
        }
        i = (i+1)%n;
    }
    return 0;
}