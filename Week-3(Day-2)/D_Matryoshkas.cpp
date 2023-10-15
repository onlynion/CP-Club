#include <iostream>
#include <set>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        multiset<int> elements;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            elements.insert(x);
        }

        int ans = 0;

        while (!elements.empty()) {
            int i = *elements.begin();
            ans++;

            for (int j = i;; j++) {
                auto k = elements.find(j);
                if (k == elements.end()) {
                    break;
                } else {
                    elements.erase(k);
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}
