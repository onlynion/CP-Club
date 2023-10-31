#include <iostream>
#include <algorithm>
using namespace std;

int bsearch(int a[], int n, long long k) {
    int lo = 1;
    int hi = a[n - 1];

    while (lo < hi) {
        int mid = lo + (hi - lo + 1) / 2;
        long long count = 0;
        
        for (int i = 0; i < n; i++) {
            if (a[i] > mid) {
                count += (a[i] - mid);
            }
        }

        if (count >= k) {
            lo = mid;
        } else {
            hi = mid - 1;
        }
    }

    return lo;
}

int main() {
    int n;
    long long k;

    cin >> n >> k;
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a + n);

    int ans = bsearch(a, n, k);

    cout << ans << endl;

    return 0;
}
