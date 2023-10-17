#include <bits/stdc++.h>

using namespace std;

int main() {
    

    int Tc;
    cin >> Tc;

    while (Tc--) {
        map<char, int> mp;
        int n, ans = 0;
        cin >> n;
        string s;
        cin >> s;

        for (int i = 0; i < s.size(); i++)
            mp[s[i]]++;

        for (int i = 0; i < s.size(); i++) {
            if (mp[s[i]] == 1 && (s[i] == 'T' || s[i] == 'i' || s[i] == 'm' || s[i] == 'u' || s[i] == 'r')) {
                mp[s[i]] = 0;
                ans++;
            }
        }

        if (ans == 5 && n == 5)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
