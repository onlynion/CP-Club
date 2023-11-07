#include <iostream>
#include <string>

using namespace std;

int main() {
    

    long t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        long z = s.size() - 1;
        long a = 0;

        for (long p = 0; p < s.size(); p++) {
            if (s[p] == '0' && p < z) {
                z = p;
            } else if (s[p] == '1') {
                a = p;
            }
        }

        cout << (z - a + 1) << endl;
    }

    return 0;
}
