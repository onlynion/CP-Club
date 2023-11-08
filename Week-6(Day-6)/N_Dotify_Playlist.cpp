#include <bits/stdc++.h>
using namespace std;

bool customCompare(int a, int b) {
    return a > b;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K, L;
        cin >> N >> K >> L;

        vector<pair<int, int>> songDetails;
        for (int i = 0; i < N; i++) {
            int duration, loudness;
            cin >> duration >> loudness;
            songDetails.push_back(make_pair(duration, loudness));
        }
        vector<int> playlistLengths;

        for (auto &pair : songDetails) {
            if (pair.second == L) {
                playlistLengths.push_back(pair.first);
            }
        }
        if (playlistLengths.size() < K) {
            cout << -1 << endl;
        } else {
            sort(playlistLengths.begin(), playlistLengths.end(), customCompare);
            int totalDuration = 0;
            for (int i = 0; i < K; i++) {
                totalDuration += playlistLengths[i];
            }
            cout << totalDuration << endl;
        }
    }
    return 0;
}
