#include <iostream>
using namespace std;

int main() {
    long t;
    cin >> t;
    while (t--) {
        long a, b;
        cin >> a >> b;
        cout << (a ^ b) << endl;
    }

    return 0;
}
