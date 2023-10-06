#include <iostream>

using namespace std;

int main() {
    long long X, Y;
    cin >> X >> Y;

    long long maxLength = 0;
    long long current = X;

    while (current <= Y) {
        maxLength++;
        current *= 2; // Multiply by 2 to find the next element in the sequence
    }

    cout << maxLength << endl;

    return 0;
}
