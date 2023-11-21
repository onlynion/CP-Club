#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, y;
        cin >> x >> y;

        int tamt = min(x, y) + max(0, y - x) * 2;
        cout << tamt << endl;
    }

    return 0;
}

   