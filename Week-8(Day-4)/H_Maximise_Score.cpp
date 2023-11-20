#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int result = abs(arr[0] - arr[1]);

        for (int i = 1; i < n - 1; i++) {
            result = min(result, max(abs(arr[i] - arr[i - 1]), abs(arr[i] - arr[i + 1])));
        }

        result = min(result, abs(arr[n - 1] - arr[n - 2]));

        cout << result << endl;
    }

    return 0;
}
