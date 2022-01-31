#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, game=0;
    while(cin>>n){
        game++;
        if(n == 0) break;
        cout << "Game " << game <<":\n";
        vector<int> ans(n), ans_count(10, 0);
        for(int i=0; i<n; i++){
            cin >> ans[i];
            ans_count[ans[i]]++;
        }
        while(1){
            int strong=0, weak=0;
            vector<int> guess(n), guess_count(10, 0), vis(10, 0);
            for(int i=0; i<n; i++){
                cin >> guess[i];
                guess_count[guess[i]]++;
            }
            if(count(guess.begin(), guess.end(), 0) == n) break;

            for(int i=0; i<n; i++){
                if(guess[i] == ans[i]){
                    strong++;
                    guess_count[guess[i]] --;
                    vis[guess[i]]++;
                }
            }
            for(int i=1; i<=9; i++){
                if(guess_count[i]){
                    weak += guess_count[i]<(ans_count[i]-vis[i])?guess_count[i]:ans_count[i]-vis[i];
                }
            }
            cout << "    (" << strong << ',' << weak << ")\n";
        }
    }
    return 0;
}