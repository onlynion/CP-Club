#include <bits/stdc++.h>

using namespace std;

int main() {
    int k, s;
    cin >> k >> s;
    int ans = 0;

    for (int x = 0; x <= k; x++) {
        for (int y = x; y <= k; y++) {
            int z = s - x - y;
            if (x <= y && y <= z && z <= k) {
                set<int> uniqueValues = {x, y, z};
                int setSize = uniqueValues.size();
                ans += (setSize == 1 ? 1 : (setSize == 2 ? 3 : 6));
            }
        }
    }

    cout << ans << endl;

    return 0;
}
