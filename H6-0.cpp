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

    int t;
    cin >> t;
    string temp;
    getline(cin, temp);
    while(t--){
        bool correct = true;
        stack<char> s;
        string str;
        getline(cin, str);
        int len = str.length();
        for(int i=0; i<len; i++){
            if(str[i] == '('){
                s.push('(');
            }
            else if(str[i] == '['){
                s.push('[');
            }
            else if(str[i] == ')'){
                if(s.empty()){
                    correct = false;
                    break;
                }
                char cur = s.top();
                if(cur!='('){
                    correct = false;
                    break;
                }
                s.pop();
            }
            else{
                if(s.empty()){
                    correct = false;
                    break;
                }
                char cur = s.top();
                if(cur!='['){
                    correct = false;
                    break;
                }  
                s.pop();             
            }
        }
        if(correct){
            if(s.empty()){
                cout << "Yes\n";
            }
            else{
                cout << "No\n";
            }
        }
        else{
            cout << "No\n";
        }
    }
    return 0;
}