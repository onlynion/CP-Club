#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin >>t;
	while(t--){
	    int n;
	    cin >>n;
	    if(n == 50) cout <<0 <<endl;
	    else if(n < 50){
	        if(n%2 == 0) cout <<(50-n)/2 <<endl;
	        else cout <<(53-n)/2+1 <<endl;
	    }
	    else{
	        if(n%3 == 2) cout <<(n-50)/3 <<endl;
	        else if(n%3 == 0) cout <<(n-48)/3+1 <<endl;
	        else cout <<(n-46)/3+2 <<endl;
	    }
	}
	return 0;
}