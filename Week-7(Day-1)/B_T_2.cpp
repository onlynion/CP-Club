#include <bits/stdc++.h>
using namespace std;
const int max_values = 1000000;

void addDivisors(int x, map<int, int>& divisors) {
    int i = 2;
    while (i * i <= x) {
        while (x % i == 0) {
            divisors[i]++;
            x /= i;
        }
        i++;
    }
    if (x > 1) divisors[x]++;
}

bool checkDivisors() {
    int n;
    cin >> n;
    vector<int> values(n);
    map<int, int> divisors;
    for (int i = 0; i < n; i++) {
        cin >> values[i];
        addDivisors(values[i], divisors);
    }
    for (auto element : divisors) {
        if (element.second % n != 0) return false;
    }
    return true;
}

int main() {
    int testCases;
    cin >> testCases;
    while (testCases--) {
        cout << (checkDivisors() ? "YES" : "NO") << "\n";
    }
    return 0;
}
