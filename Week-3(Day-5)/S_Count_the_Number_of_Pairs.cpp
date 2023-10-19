#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        map<char, int> cnt;
        for (int i = 0; i < n; i++)
            cnt[s[i]]++;

        int ans = 0;
        for (char ch = 'a'; ch <= 'z'; ch++) {
            ans += min(cnt[ch], cnt[toupper(ch)]);
            ans += min(k, (max(cnt[ch], cnt[toupper(ch)]) - min(cnt[ch], cnt[toupper(ch)])) / 2);
            k -= min(k, (max(cnt[ch], cnt[toupper(ch)]) - min(cnt[ch], cnt[toupper(ch)])) / 2);
        }

        cout << ans << endl;
    }

    return 0;
}
