#include <bits/stdc++.h>
using namespace std;

int main() {
    int Tc;
    cin >> Tc;
    while (Tc--) {
        int n;
        cin >> n;
        map<string, bool> mp;
        string a1[n + 1];

        for (int i = 1; i <= n; i++) {
            cin >> a1[i];
            mp[a1[i]] = true;
        }

        for (int i = 1; i <= n; i++) {
            bool ans = false;
            for (int j = 1; j <= a1[i].size(); j++) {
                string s1 = a1[i].substr(0, j);
                string s2 = a1[i].substr(j);
                if (mp[s1] && mp[s2]) {
                    ans = true;
                    cout << 1;
                    break;
                }
            }
            if (!ans) {
                cout << 0;
            }
        }
        cout << endl;
    }

    return 0;
}
