#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    
    string str;
    while(cin >>str){
        if(str[0] == 'E'){
            break;
        }
        vector<string> x;
        x.push_back(str);
        int i=0;
        while(1){
            i++;
            x.push_back(to_string(x[i-1].size()));
            if(x[i].compare(x[i-1]) == 0){
                cout << i << '\n';
                break;
            }
        }
    }
    return 0;
}