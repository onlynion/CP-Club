#include <bits/stdc++.h>
#include <array>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int heights[n];
        for (int i = 0; i < n; i++) {
            cin >> heights[i];
        }
        int heightDifferences[n];
        heightDifferences[0] = abs(heights[1] - heights[0]);
        heightDifferences[n - 1] = abs(heights[n - 1] - heights[n - 2]);

        for (int i = 1; i <= n - 2; i++) {
            int diff1 = abs(heights[i + 1] - heights[i]);
            int diff2 = abs(heights[i] - heights[i - 1]);
            heightDifferences[i] = max(diff1, diff2);
        }
        int *result = min_element(heightDifferences, heightDifferences + n);
        cout << *result << endl;
    }
    return 0;
}
