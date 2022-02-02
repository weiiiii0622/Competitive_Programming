#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector<string> beiju;
    string str;
    while(getline(cin, str, '\n')){
        int flag = 0;
        beiju.clear();
        string normal;
        for(int i=0; i<str.length(); i++){
            if(str[i]=='['){
                i++;
                string temp;
                while((i<str.length()) && (str[i]!='[' && str[i]!=']')){
                    temp += str[i];
                    i++;
                }
                if(str[i]=='['){i--;}
                beiju.push_back(temp);
            }
            else{
                if(str[i]!=']'){
                    normal += str[i];
                }
            }
        }
        for(auto x=beiju.rbegin(); x!=beiju.rend(); x++){
            cout << *x;
        }
        cout << normal <<'\n';
    }
    return 0;
}