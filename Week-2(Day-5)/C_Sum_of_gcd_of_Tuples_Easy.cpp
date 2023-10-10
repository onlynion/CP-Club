#include <bits/stdc++.h>

using namespace std;


int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int K;
    cin >> K;

    long long sum = 0; 

    for (int a = 1; a <= K; ++a) {
        for (int b = 1; b <= K; ++b) {
            for (int c = 1; c <= K; ++c) {
                
                int gcd_abc = gcd(a, gcd(b, c));
                sum += gcd_abc;
            }
        }
    }

    cout << sum << endl;

    return 0;
}
