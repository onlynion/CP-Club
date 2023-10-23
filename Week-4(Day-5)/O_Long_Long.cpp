#include <bits/stdc++.h>
using namespace std;

string solve(vector<int>& a) {
    vector<int> nonZeros;
    for (int i : a) {
        if (i != 0) {
            nonZeros.push_back(i);
        }
    }

    long long sumOfAbsoluteValues = accumulate(a.begin(), a.end(), 0LL, [](long long acc, int val) {
        return acc + abs(val);
    });

    int negativeTransitionCount = 0;
    for (int i = 0; i < nonZeros.size(); ++i) {
        if (nonZeros[i] < 0 && (i == 0 || nonZeros[i - 1] > 0)) {
            negativeTransitionCount++;
        }
    }

    return to_string(sumOfAbsoluteValues) + " " + to_string(negativeTransitionCount);
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
