#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    

    long t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        long target;
        cin >> target;

        long total = 0;
        vector<pair<long, long>> w(s.size());

        for (long p = 0; p < s.size(); p++) {
            w[p] = make_pair(s[p] - 'a' + 1, p);
            total += w[p].first;
        }

        sort(w.rbegin(), w.rend());

        vector<bool> v(s.size(), true);

        for (long p = 0; (target < total) && p < s.size(); p++) {
            total -= w[p].first;
            v[w[p].second] = false;
        }

        for (long p = 0; p < s.size(); p++) {
            if (!v[p]) {
                continue;
            }
            cout << s[p];
        }

        cout << endl;
    }

    return 0;
}
