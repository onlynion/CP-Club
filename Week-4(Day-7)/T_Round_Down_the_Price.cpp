#include <iostream>
using namespace std;

int solve(int m) {
    int round = 1;
    while (round * 10 <= m) {
        round *= 10;
    }

    return m - round;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int m;
        cin >> m;
        int result = solve(m);
        cout << result << endl;
    }
    return 0;
}
