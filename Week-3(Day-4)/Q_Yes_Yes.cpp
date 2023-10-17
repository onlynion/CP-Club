#include <iostream>
#include <string>

using namespace std;

int main() {
    int T;
    string value = "YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
    cin >> T;

    while (T--) {
        string str;
        cin >> str;

        bool isSub = false;
        int M = str.length();
        int N = value.length();

        for (int i = 0; i <= N - M; i++) {
            int j;
            for (j = 0; j < M; j++) {
                if (value[i + j] != str[j]) {
                    break;
                }
            }
            if (j == M) {
                isSub = true;
                break;
            }
        }

        if (isSub) {
            if (T == 0) {
                cout << "YES";
            } else {
                cout << "YES" << endl;
            }
        } else {
            if (T == 0) {
                cout << "NO";
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
