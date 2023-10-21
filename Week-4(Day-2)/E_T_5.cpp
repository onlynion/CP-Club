#include <bits/stdc++.h>
using namespace std;

vector<long long> palindromic_numbers;

bool isPalindrome(long long x) {
    string str_x = to_string(x);
    string reverse_x = str_x;
    reverse(reverse_x.begin(), reverse_x.end());
    return str_x == reverse_x;
}

void preCalculatePalindromicNumbers() {
    for (long long i = 0; i < (1LL << 15); i++) {
        if (isPalindrome(i)) {
            palindromic_numbers.push_back(i);
        }
    }
}

void solve() {
    int n;
    cin >> n;
    unordered_map<long long, long long> frequency_map;
    set<long long> unique_numbers;

    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        frequency_map[x]++;
        unique_numbers.insert(x);
    }

    long long total_count = 0;
    
    for (long long num : unique_numbers) {
        total_count += (frequency_map[num] * (frequency_map[num] + 1)) / 2;

        for (int j = 0; j < palindromic_numbers.size(); j++) {
            long long check_num = num ^ palindromic_numbers[j];
            if (frequency_map[check_num] && check_num < num) {
                total_count += (frequency_map[check_num] * frequency_map[num]);
            }
        }
    }

    cout << total_count << endl;
}

int main() {
    preCalculatePalindromicNumbers();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
