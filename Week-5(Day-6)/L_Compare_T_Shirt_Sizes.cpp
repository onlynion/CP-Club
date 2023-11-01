#include <bits/stdc++.h>

using namespace std;

int compare(string s) {
    if (s == "M") {
        return 0;
    }

    int countOfX = 1;
    for (char ch : s) {
        if (ch == 'X') {
            countOfX++;
        }
    }
    if (s.back() == 'S') {
        countOfX *= -1;
    }
    return countOfX;
}

int main() 
{
    

    int T;
    cin >> T;

    while (T--) {
        string a, b;
        cin >> a >> b;

        if (a == b) {
            cout << "=\n";
        } else if (compare(a) < compare(b)) {
            cout << "<\n";
        } else {
            cout << ">\n";
        }
    }

    return 0;
}
