#include <iostream>
using namespace std;

int main() {
	
	long long int t; cin>>t;
	while(t--){
	     long long x;
        cin>>x;
        if(x==1){
            cout<<-1<<endl;
            continue;
        }
        if(x<=1000000){
            cout<<x-1<<" "<<1<<" "<<1<<endl;
            continue;
        }
        int m=1000000;
        if(x%m==0){
            cout<<m<<" "<<(x/m-1)<<" "<<m<<endl;
        }
        else{
            cout<<m<<" "<<x/m<<" "<<x%m<<endl;
        }
	}
	    return 0;
	}

	    