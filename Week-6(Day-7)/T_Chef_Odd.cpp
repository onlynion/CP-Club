#include <iostream>
using namespace std;

int main() {

int t;
cin>>t;
while(t--)
{
   long long  int n,k;
    
    cin>>n>>k;
    
    if(n<2*k)
     { 
         cout<<"NO"<<endl;
         continue;
     }
     
     long long int te=n/2;
     long long int to;
     
     if(n%2==0)
       to=n/2;
     
     else
        to=n/2+1;
   
     
        long long  int value=to-k;
         
         if(value%2==0)
         {
             cout<<"YES"<<endl;
             continue;
         }
        
        else
        {
           cout<<"NO"<<endl;
             continue;  
        }
   
       
}

	return 0;
}