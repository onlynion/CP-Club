#include <bits/stdc++.h>

using namespace std;

string solve() {
    int l;
    string s;
    string res;
    cin >> l >> s;

    for (int i = l - 1; i >= 0; i--) {
        if (s[i] == '0') {
            int sym = stoi(s.substr(i - 2, 2));
            char r = 'a' - 1 + static_cast<char>(sym);
            res = r + res;
            i -= 2;
        } else {
            int r = stoi(s.substr(i, 1));
            res = static_cast<char>('a' - 1 + r) + res;
        }
    }

    return res;
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

vector<vector<int>> makeMatrix(int n, int m) {
    vector<vector<int>> x(n, vector<int>(m));
    return x;
}
