#include <iostream>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--) {
	    int n, m;
	    cin >> n >> m;
	    if(n <= 36 * m) cout << "YES\n";
	    else cout << "NO\n";
	}
	return 0;
}