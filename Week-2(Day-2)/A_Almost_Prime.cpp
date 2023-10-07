#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, amount = 0;
    cin >> n;

    vector<bool> isNotPrime(n + 1, false);
    vector<int> primeFactorsCount(n + 1, 0);

    for (int i = 2; i <= n; ++i) {
        if (!isNotPrime[i]) {
            for (int j = i + i; j <= n; j += i) {
                isNotPrime[j] = true;
                primeFactorsCount[j] += 1;
            }
        }

        if (primeFactorsCount[i] == 2) {
            amount += 1;
        }
    }

    cout << amount << endl;
    return 0;
}
