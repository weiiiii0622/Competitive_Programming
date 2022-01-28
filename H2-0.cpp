#include <iostream>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int count=1, max=1, i=1;
    char cur;
    string DNA;

    cin >> DNA;
    cur = DNA[0];
    while(i<DNA.length()){
        if(DNA[i]!=cur){
            max = count>max?count:max;
            count = 1;
            cur = DNA[i];
        }
        else{
            count += 1;
        }
        i++;
    }
    max = count>max?count:max;
    cout << max << '\n';
    return 0;
}