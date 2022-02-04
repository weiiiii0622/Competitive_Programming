#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>
#include <utility>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    stack<string> dream;
    int n;
    cin >> n;
    while(n--){
        string command;
        cin >> command;
        if(command[0] == 'S'){
            string name;
            cin >> name;
            dream.push(name);
        }
        else if(command[0] == 'K'){
            if(!dream.empty()){
                dream.pop();
            }
        }
        else{
            cout << (dream.empty()?"Not in a dream":dream.top()) << '\n';
        }
    }
    return 0;
}