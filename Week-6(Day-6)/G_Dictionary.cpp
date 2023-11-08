#include <iostream>
#include <string>

using namespace std;

int main() {
    long t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        long res = 1 + 25 * (s[0] - 'a') + (s[1] - 'a') - (s[1] > s[0]);
        cout << res << endl;
    }

    return 0;
}
