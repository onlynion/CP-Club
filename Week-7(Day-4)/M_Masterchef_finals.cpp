#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int x;
	    cin>>x;
	    string rank=(x<=10)?"YES":"NO";
	    cout<<rank<<endl;
	}
	return 0;
}