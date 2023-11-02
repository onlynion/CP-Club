#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    
    long t;
    cin >> t;

    while (t--) {
        long n;
        cin >> n;
        vector<long> a(n);

        for (long p = 0; p < n; p++) {
            cin >> a[p];
        }

        string s;
        cin >> s;
        vector<char> v(100, '_');
        bool possible = true;

        for (long p = 0; possible && p < a.size(); p++) {
            if (v[a[p]] == '_') {
                v[a[p]] = s[p];
            } else if (v[a[p]] != s[p]) {
                possible = false;
                break;
            }
        }

        cout << (possible ? "YES" : "NO") << endl;
    }

    return 0;
}
