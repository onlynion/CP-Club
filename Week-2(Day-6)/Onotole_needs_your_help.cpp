#include <iostream>

using namespace std;

int main() {
    int n;
    long long res = 0;
    cin >> n;
    long long *a = new long long[n]; 
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        res ^= a[i];
    }
    cout << res << endl;
    
    
    delete[] a;
    
    return 0;
}
