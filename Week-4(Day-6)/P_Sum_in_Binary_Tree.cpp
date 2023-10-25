#include <iostream>
using namespace std;

long long solve(long long n) {
    long long result = 0;
    while (n != 0) {
        result += n;
        n /= 2;
    }

    return result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}
