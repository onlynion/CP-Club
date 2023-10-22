#include <iostream>
using namespace std;

int solve(string s, char c) {
    int result = 0;
    string sequence = s + s;
    int lastGreenIndex = -1;
    for (int i = sequence.length() - 1; i >= 0; --i) {
        if (sequence[i] == 'g') {
            lastGreenIndex = i;
        }
        if (sequence[i] == c && lastGreenIndex != -1) {
            result = max(result, lastGreenIndex - i);
        }
    }

    return result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        char c;
        cin >> c;
        string s;
        cin >> s;
        cout << solve(s, c) << endl;
    }
    return 0;
}
