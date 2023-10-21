#include <bits/stdc++.h>
using namespace std;

bool solve(int a[], string s) {
    unordered_map<int, char> digitToLetter;
    for (int i = 0; i < s.size(); ++i) {
        if (digitToLetter.find(a[i]) != digitToLetter.end() && digitToLetter[a[i]] != s[i]) {
            return false;
        }
        digitToLetter[a[i]] = s[i];
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        string s;
        cin >> s;
        cout << (solve(a, s) ? "YES" : "NO") << endl;
    }
    return 0;
}
