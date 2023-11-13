#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while (t--) {
	    int n;
	    cin >> n;
	    
	    int a[n];
	    for (int i=0; i<n; i++)
	        cin >> a[i];

        sort(a,a+n);
        
	   
	   
	   int l1 = n-1;
	   int l2, max;
	   
	   while (a[l1] == a[n-1]) {
	       l1--;
	   }
	   
	   max = a[n-1] + a[l1];
	    cout << max << endl;
	}
	return 0;
}