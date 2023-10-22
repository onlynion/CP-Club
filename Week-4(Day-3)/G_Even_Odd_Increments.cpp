#include <bits/stdc++.h>
using namespace std;

string solve(vector<int>& a, vector<int>& type, vector<int>& x) {
    vector<long long> result(type.size());
    int evenCount = count_if(a.begin(), a.end(), [](int ai) { return ai % 2 == 0; });
    int oddCount = a.size() - evenCount;
    long long sum = accumulate(a.begin(), a.end(), 0LL);

    for (int i = 0; i < result.size(); ++i) {
        if (type[i] == 0) {
            sum += static_cast<long long>(evenCount) * x[i];

            if (x[i] % 2 != 0) {
                evenCount = 0;
                oddCount = a.size();
            }
        } else {
            sum += static_cast<long long>(oddCount) * x[i];

            if (x[i] % 2 != 0) {
                evenCount = a.size();
                oddCount = 0;
            }
        }

        result[i] = sum;
    }

    ostringstream oss;
    for (int i = 0; i < result.size(); ++i) {
        oss << result[i];
        if (i < result.size() - 1) {
            oss << '\n';
        }
    }

    return oss.str();
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        vector<int> type(q);
        vector<int> x(q);
        for (int i = 0; i < q; ++i) {
            cin >> type[i] >> x[i];
        }
        string result = solve(a, type, x);
        cout << result;
        if (t > 0) {
            cout << '\n';
        }
    }
    return 0;
}
