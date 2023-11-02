#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int k, n;
    cin >> k >> n;

    vector<int> arr;
    arr.push_back(1);
    int diff = 1;

    for (int i = 1; i < k && arr[i - 1] + diff <= n; i++) {
        if (n - (arr[i - 1] + diff) + 1 < k - arr.size()) {
            break;
        }
        arr.push_back(arr[i - 1] + diff);
        diff++;
    }

    while (arr.size() < k) {
        arr.push_back(arr.back() + 1);
    }

    for (int i : arr) {
        cout << i << " ";
    }

    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
