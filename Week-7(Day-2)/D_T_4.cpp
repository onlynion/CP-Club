
#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    
 
    int t; cin >> t;
    while(t--) {
        ll a, b; cin >> a >> b;

        ll GCD = __gcd(a, b);
        bool flag = true;

        while(b != 1) {

            if(GCD == 1) {
                flag = false;
                break;
            }
            b /= GCD;
            GCD = __gcd(GCD, b);
        }

        if (flag) {
            cout << "Yes\n";
        }
        else {
            cout << "No\n";
        }
    }
    return 0;
}