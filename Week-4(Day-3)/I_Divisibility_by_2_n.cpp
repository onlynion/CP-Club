#include <bits/stdc++.h>
using namespace std;

int computeTwoExponent(int x) {
    int result = 0;
    while (x % 2 == 0) {
        ++result;
        x /= 2;
    }
    return result;
}

int solve(vector<int>& a) {
    int result = 0;
    int rest = a.size() - accumulate(a.begin(), a.end(), 0, [](int acc, int val) {
        return acc + computeTwoExponent(val);
    });

    vector<int> sortedExtras;
    for (int i = 1; i <= a.size(); ++i) {
        int extra = computeTwoExponent(i);
        if (extra != 0) {
            sortedExtras.push_back(extra);
        }
    }

    sort(sortedExtras.rbegin(), sortedExtras.rend());

    for (int extra : sortedExtras) {
        if (rest >= 1) {
            ++result;
            rest -= extra;
        }
    }

    return (rest <= 0) ? result : -1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        cout << solve(a) << endl;
    }
    return 0;
}
