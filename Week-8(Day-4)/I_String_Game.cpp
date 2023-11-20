#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, i, zero = 0, one = 0;
        cin >> n;

        string s;
        cin >> s;

        for (i = 0; i < n; i++) {
            if (s[i] == '0') zero++;
            else one++;
        }

        int minCount = min(zero, one);

        if (minCount % 2 == 1) {
            cout << "Zlatan" << endl;
        } else {
            cout << "Ramos" << endl;
        }
    }

    return 0;
}
