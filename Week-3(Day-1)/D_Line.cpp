#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long Tc;
    cin >> Tc;
    
    while (Tc--) {
        long long n, sum = 0;
        string s;
        cin >> n >> s;
        
        vector<long long> a(n);
        
        for (long long i = 0; i < n; i++) {
            if (s[i] == 'L') {
                a[i] = i;
            } else {
                a[i] = n - i - 1;
            }
            sum += a[i];
        }
        
        sort(a.begin(), a.end());
        
        for (long long i = 0; i < n; i++) {
            long long tmp = n - a[i] - 1;
            long long res = sum - a[i] + tmp;
            if (res > sum) {
                sum = res;
            }
            cout << sum << " ";
        }
        
        cout << endl;
    }

    return 0;
}
