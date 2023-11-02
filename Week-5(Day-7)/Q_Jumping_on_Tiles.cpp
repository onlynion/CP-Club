#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Pair {
    char r;
    int i;
};

int index(char r) {
    return r - 'a' + 1;
}

int abs_diff(char l, char r) {
    return abs(l - r);
}

string stringJoin(const vector<string>& parts, const string& delimiter) {
    string result;
    for (int i = 0; i < parts.size(); i++) {
        result += parts[i];
        if (i < parts.size() - 1) {
            result += delimiter;
        }
    }
    return result;
}

string solve() {
    string s;
    cin >> s;
    char l = s[0];
    char r = s[s.length() - 1];
    bool reverse = false;

    if (l > r) {
        swap(l, r);
        reverse = true;
    }

    vector<Pair> res;
    for (int i = 0; i < s.length(); i++) {
        char x = s[i];
        if (x >= l && x <= r) {
            res.push_back({x, i + 1});
        }
    }

    if (reverse) {
        sort(res.begin(), res.end(), [](const Pair& a, const Pair& b) {
            return a.r > b.r;
        });
    } else {
        sort(res.begin(), res.end(), [](const Pair& a, const Pair& b) {
            return a.r < b.r;
        });
    }

    int diff = abs_diff(l, r);
    string str1 = to_string(diff) + " " + to_string(res.size());
    vector<string> strArr;
    strArr.push_back("1");

    for (const Pair& p : res) {
        if (p.i != 1 && p.i != s.length()) {
            strArr.push_back(to_string(p.i));
        }
    }

    strArr.push_back(to_string(s.length()));

    return str1 + "\n" +  stringJoin(strArr, " ");
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cout << solve() << endl;
    }
    return 0;
}
