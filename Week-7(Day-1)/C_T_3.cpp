#include <iostream>

typedef long long ll;

int main() {
    ll l, r;
    std::cin >> l >> r;
    std::cout << "YES" << std::endl;
    
    for (ll p = l; p <= r; p += 2) {
        std::cout << p << " " << p + 1 << std::endl;
    }

    return 0;
}
