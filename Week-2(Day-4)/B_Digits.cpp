#include <bits/stdc++.h>

using namespace std;


int countDigitsInBase(int number, int base) {
    
    string baseRepresentation = "";
    while (number > 0) {
        int remainder = number % base;
        baseRepresentation = to_string(remainder) + baseRepresentation;
        number /= base;
    }

    
    return baseRepresentation.length();
}

int main() {
    int number, base;

    
    cin >> number;

    
    cin >> base;

    int digitCount = countDigitsInBase(number, base);

    cout <<  digitCount << endl;

    return 0;
}
