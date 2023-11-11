#include <iostream>

using namespace std;

long long gcd(long long a, long long b) {
    return (b == 0) ? a : gcd(b, a % b);
}

int main() {
    long long n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;

    long long lcm = a * b / gcd(a, b);
    long long total = p * (n / a) + q * (n / b) - min(p, q) * (n / lcm);

    cout << total << endl;

    return 0;
}
