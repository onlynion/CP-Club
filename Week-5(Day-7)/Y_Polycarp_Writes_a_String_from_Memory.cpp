#include <iostream>
#include <set>
using namespace std;

int main() {
    long t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        long cnt = 0;
        set<char> w;

        for (long p = 0; p < s.size(); p++) {
            w.insert(s[p]);
            if (w.size() > 3) {
                ++cnt;
                w.clear();
                w.insert(s[p]);
            }
        }

        cnt += (w.size() > 0);
        cout << cnt << endl;
    }

    return 0;
}
