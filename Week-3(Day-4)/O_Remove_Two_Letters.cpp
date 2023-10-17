#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <set>

using namespace std;

void customFunction() {
    int numCases;
    cin >> numCases;
    for (int currentCase = 0; currentCase < numCases; ++currentCase) {
        int n;
        cin >> n;
        string inputString;
        cin >> inputString;
        int result = n - 1;
        for (int i = 1; i + 1 < n; ++i) {
            if (inputString[i - 1] == inputString[i + 1]) {
                result--;
            }
        }
        cout << result << '\n';
    }
}

int main(int argc, char* argv[]) {
    customFunction();
}
