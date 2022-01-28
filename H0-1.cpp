#include <iostream>
#include <iomanip>
using namespace std;

void get_angle(double, double);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    double H, M;
    char c;
    while(cin >> H >> c >> M){
        if(H == 0 && M == 0){
            break;
        }
        get_angle(H, M);
    }
    return 0;
}

void get_angle(double h, double m){
    double h_hand=0.0, m_hand=0.0, ans;
    m_hand = m * 6.0;
    h_hand = ((int)h%12) * 30.0 + m / 2.0;
    ans = m_hand>h_hand?m_hand-h_hand:h_hand-m_hand;
    ans = ans>180?360-ans:ans;
    cout << fixed << setprecision(3) << ans << '\n';
}