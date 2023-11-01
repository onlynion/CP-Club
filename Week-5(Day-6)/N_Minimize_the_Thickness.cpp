#include <bits/stdc++.h>

using namespace std;

int solve() {
    int n;
    cin >> n;

    int sum = 0;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        sum += v[i];
    }

    int res = n;
    for (int numOfGroups = 1; numOfGroups <= n; numOfGroups++) {
        if (sum % numOfGroups != 0) {
            continue;
        }

        int target = sum / numOfGroups;
        int cnt = 0, maxCnt = 0, curSum = 0;
        for (int j = 0; j < n; j++) {
            curSum += v[j];
            cnt++;
            if (curSum > target) {
                maxCnt = n;
                break;
            }
            if (curSum == target) {
                if (cnt > maxCnt) {
                    maxCnt = cnt;
                }
                curSum = 0;
                cnt = 0;
            }
        }
        if (maxCnt < res) {
            res = maxCnt;
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
