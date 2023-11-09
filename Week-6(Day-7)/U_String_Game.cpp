#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        char s[n];
        int ct = 0;
        for (int i = 0; i < n; i++) {
            cin >> s[i];
        }

        while (true) {
            bool found_move = false;
            for (int i = 0; i < n - 1; i++) {
                if (s[i] != s[i+1]) {
                    found_move = true;
                    n -= 2; 
                    for (int j = i; j < n; j++) {
                        s[j] = s[j+2];  
                    }
                    ct++;
                    break;
                }
            }
            if (!found_move) {
                
                if (ct % 2 != 0) {
                    ;
                    cout<< "Zlatan\n";
                } else {
                    
                    cout<< "Ramos\n";
                }
                break;
            }
        }
    }
    return 0;
}