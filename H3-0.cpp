#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;



int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    char reverse[200];
    reverse['A']='A';reverse['E']='3';reverse['H']='H';reverse['I']='I';reverse['J']='L';reverse['L']='J';
    reverse['M']='M';reverse['O']='O';reverse['S']='2';reverse['T']='T';reverse['U']='U';reverse['V']='V';reverse['W']='W';reverse['X']='X';
    reverse['Y']='Y';reverse['Z']='5';reverse['1']='1';reverse['2']='S';reverse['3']='E';reverse['5']='Z';reverse['8']='8';

    string str;
    while(cin >> str){
        int i=0, j=str.length()-1;
        bool palindrome=true, mirrored=true;
        while(j>=i){
            if(str[i]!=str[j]){
                palindrome = false;
            }
            if(str[j]!=reverse[str[i]]){
                mirrored = false;
            }
            if(palindrome == false && mirrored == false){
                break;
            }
            i++;
            j--;
        }
        if(palindrome == false || mirrored == false){
            if(palindrome == false && mirrored == false){
                cout << str << " -- is not a palindrome.\n\n";
            }
            else if(palindrome == false){
                cout << str << " -- is a mirrored string.\n\n";
            }
            else{
                cout << str << " -- is a regular palindrome.\n\n";
            }
        }
        else{
            cout << str << " -- is a mirrored palindrome.\n\n";
        }
    }
    return 0;
}