#include <iostream>
using namespace std;


void hanoi(int, int, int, int);

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, step=1;
    cin >> n;
    for(int i=0; i<n; i++){
        step = step*2;
    }
    cout << step-1 << '\n';
    hanoi(1,2,3,n);

    return 0;
}

void hanoi(int start, int mid, int end, int n){
    if(n == 1){
        cout << start << ' ' << end << '\n';
    }
    else{
        hanoi(start, end, mid, n-1);
        cout << start << ' ' << end << '\n';
        hanoi(mid, start, end, n-1);
    }
}