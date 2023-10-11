#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string s) {
    int left = 0;
    int right = s.length() - 1;

    while (left < right) {
        if (s[left] != s[right]) {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

int countPalindromes(string s, int x) {
    int count = 0;
    string currentTime = s;
    string initialTime = s;

    do {
        if (isPalindrome(currentTime)) {
            count++;
        }

        int hours = stoi(currentTime.substr(0, 2));
        int minutes = stoi(currentTime.substr(3, 2));

        minutes += x;
        hours += minutes / 60;
        minutes %= 60;
        hours %= 24;

        currentTime = (hours < 10 ? "0" : "") + to_string(hours) + ":" + (minutes < 10 ? "0" : "") + to_string(minutes);
    } while (currentTime != initialTime);

    return count;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        int x;
        cin >> s >> x;

        int result = countPalindromes(s, x);
        cout << result << endl;
    }

    return 0;
}
