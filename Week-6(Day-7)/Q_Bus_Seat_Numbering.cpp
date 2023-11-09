#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a;
	    cin>>a;
	    for(int i=1;i<11;i++){
	        if(i==a){
	            cout<<"Lower Double"<<endl;
	        }
	    }
	    for(int i=11;i<16;i++){
	        if(i==a){
	            cout<<"Lower Single"<<endl;
	        }
	    }
	    for(int i=16;i<26;i++){
	        if(i==a){
	            cout<<"Upper Double"<<endl;
	        }
	    }
	    for(int i=26;i<31;i++){
	        if(i==a){
	            cout<<"Upper Single"<<endl;
	        }
	    }
	    
	}
	return 0;
}