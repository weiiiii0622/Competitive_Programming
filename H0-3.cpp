#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        double ans=0;
        string a;
        cin >> a;
        for(int i=0; i<a.length();){
            int j=i+1, count=0;
            double m;
            switch (a[i]){
            case 'C':
                m = 12.01;
                break;
            case 'H':
                m = 1.008;
                break;
            case 'O':
                m = 16.00;
                break;
            case 'N':
                m = 14.01;
                break;            
            default:
                break;
            }
            if(j>=a.length() || a[j]=='C' || a[j]=='H' || a[j]=='O' || a[j]=='N'){
                ans += m;
                i++;
            }
            else{
                while(a[j]>='0' && a[j]<='9'){
                    count = count*10 + (a[j]-'0');
                    j++;
                }
                ans += count * m;
                i += (j-i);
            }
        }
        cout << fixed << setprecision(3) << ans << '\n';
    }
    return 0;
}