#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int get_max(int* count){
    int index = 0;
    for(int i=1; i<4; i++){
        if(count[i]>count[index]){
            index = i;
        }
    }
    return index;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t, m, n;
    cin >> t;
    while(t--){
        cin >> m >> n;
        int error=0;
        vector<string> s(m);
        string ans(n, '\0');
        
        for(int i=0; i<m; i++){
            cin >> s[i];
        }
        
        for(int i=0; i<n; i++){
            int count[4] = {0};
            for(int j=0; j<m; j++){
                switch(s[j][i]){
                    case 'A':
                        count[0]++;
                        break;
                    case 'C':
                        count[1]++;
                        break;
                    case 'G':
                        count[2]++;
                        break;
                    case 'T':
                        count[3]++;
                        break;
                }
            }
            int index = get_max(count);
            switch (index){
            case 0:
                ans[i] = 'A';
                break;
            case 1:
                ans[i] = 'C';
                break;
            case 2:
                ans[i] = 'G';
                break;
            case 3:
                ans[i] = 'T';
                break;
            }
            error += m-count[index];
        }
        cout << ans << '\n' << error << '\n';
    }
    return 0;
}