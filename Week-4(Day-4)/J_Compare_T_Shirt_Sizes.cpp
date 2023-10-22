#include <iostream>
using namespace std;

int toValue(string size) {
    if (size == "M") {
        return 0;
    }
    return ((size[size.length() - 1] == 'L') ? 1 : -1) * size.length();
}

string solve(string a, string b) {
    int aValue = toValue(a);
    int bValue = toValue(b);

    if (aValue < bValue) {
        return "<";
    }
    if (aValue > bValue) {
        return ">";
    }

    return "=";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;
        cout << solve(a, b) << endl;
    }
    return 0;
}
