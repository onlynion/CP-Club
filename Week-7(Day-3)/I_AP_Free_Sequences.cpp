#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	   int n;
	   int count=0;
	   cin>>n;
	   int a[n];
	   for(int i=0;i<n;i++)
	   {
	       cin>>a[i];
	   }
	   
	   for(int i=0;i<n-2;i++)
	   {
	       for(int j=i+1;j<n-1;j++)
	       {
	           for(int k=j+1;k<n;k++)
	           {
	               if((a[j]-a[i])==(a[k]-a[j]))
	               {
	                   count++;
	               }
	               
	           }
	       }
	   }
	   if(count>=1)
	   {
	       cout<<"NO\n";
	   }
	   else
	   {
	       cout<<"YES\n";
	   }
	}
	return 0;
}