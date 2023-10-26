#include <bits/stdc++.h>
using namespace std;

int computeDigitSum(int x) {
    int sum = 0;
    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int solve(int s) {
    int result = -1;
    for (int i = 1; i < (1 << 9); ++i) {
        string str;
        for (int x = 1; x <= 9; ++x) {
            if ((i & (1 << (x - 1))) != 0) {
                str += to_string(x);
            }
        }
        int num = stoi(str);
        if (computeDigitSum(num) == s) {
            if (result == -1 || num < result) {
                result = num;
            }
        }
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int s;
        cin >> s;
        int result = solve(s);
        cout << result << endl;
    }
    return 0;
}
