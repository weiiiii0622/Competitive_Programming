#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

void solve(string& dna, int& index, int i, int len){
    int j=index, k=i, temp=len;
    while(temp--){
        if(dna[k]<dna[j]){
            index = i;
            break;
        }
        else if(dna[k]==dna[j]){
            k = (k+1)%len;
            j = (j+1)%len;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        string dna;
        cin >> dna;
        int index=0, len=dna.length();
        for(int i=0; i<len; i++){
            solve(dna, index, i, len);
        }
        int temp=len;
        while(temp--){
            cout << dna[index];
            index = (index+1)%len;
        }
        cout << '\n';
    }
    return 0;
}