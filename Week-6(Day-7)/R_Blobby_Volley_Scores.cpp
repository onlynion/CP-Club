#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int N;cin>>N;
	    string S;
	    cin>>S;
	    int countA = 0;
	    int countB = 0;
	    char Begin = 'A';
	    for(int i=0;i<N;i++){
	        if(S[i] == Begin){
	            if(S[i] == 'A'){
	                countA++;
	            }else{
	                countB++;
	            }
	        }else{
	            Begin = S[i];
	        }
	    }
	    std::cout << countA << " "<< countB << std::endl;
	}
	return 0;
}