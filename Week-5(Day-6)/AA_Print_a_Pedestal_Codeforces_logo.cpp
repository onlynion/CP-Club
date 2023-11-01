#include <iostream>
using namespace std;

int main() {
    long t;
    cin >> t;
    
    while (t--) {
        long n;
        cin >> n;
        long a, b, c;
        
        if (n % 3 == 0) {
            a = b = c = (n - 3) / 3;
            a += 1;
            b += 2;
        } else if (n % 3 == 1) {
            a = b = c = (n - 4) / 3;
            a += 1;
            b += 3;
        } else if (n % 3 == 2) {
            a = b = c = (n - 5) / 3;
            a += 2;
            b += 3;
        }
        
        cout << a << " " << b << " " << c << endl;
    }

    return 0;
}
