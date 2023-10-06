#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        
        vector<string> words[3];
        unordered_map<string, int> wordCount;

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < n; j++) {
                string word;
                cin >> word;
                words[i].push_back(word);
                wordCount[word]++;
            }
        }

        int points[3] = {0};

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < n; j++) {
                string word = words[i][j];
                if (wordCount[word] == 1) {
                    points[i] += 3;
                } else if (wordCount[word] == 2) {
                    points[i] += 1;
                }
            }
        }

        cout << points[0] << " " << points[1] << " " << points[2] << endl;
    }

    return 0;
}
