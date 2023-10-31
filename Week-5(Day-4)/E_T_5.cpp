#include <iostream>
using namespace std;

#define ll long long

ll sum_of_digit(ll n) {
    ll sm = 0;
    while (n != 0) {
        sm += n % 10;
        n /= 10;
    }
    return sm;
}

int main() {
    ll n, k;
    cin >> n >> k;
    ll l = 1, r = n;
    ll ans = 0;
    
    while (l <= r) {
        ll mid = (l + r) / 2;
        if ((mid - sum_of_digit(mid)) >= k) {
            ans = n - mid + 1;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    cout << ans << endl;

    return 0;
}
