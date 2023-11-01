#include <bits/stdc++.h>

using namespace std;

int solve() {
    int a, b, c;
    cin >> a >> b >> c;

    int s = abs(c - b) + c;
    if (a < s) {
        return 1;
    }
    if (a > s) {
        return 2;
    }

    return 3;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cout << solve() << endl;
    }

    return 0;
}

int max(int x, int y) {
    return (x > y) ? x : y;
}

int min(int x, int y) {
    return (x < y) ? x : y;
}

int abs(int x) {
    return (x < 0) ? -x : x;
}
