#include<bits/stdc++.h>
#define ll long long

using namespace std;

bool yes(vector<ll>&v){
int n=v.size();
      for(int i=1;i<n-1;i++){
        if(v[i-1]<v[i] && v[i+1]<v[i]){
          continue;
           
        }
        if(v[i-1]>v[i] && v[i+1]>v[i]){
          continue;
           
        }
        else{
            return false;
        }
      }
      return true;
}  
void solve(){
      int n;
      cin>>n;
      ll a[n];
      for(int i=0;i<n;i++){
        cin>>a[i];
      }  
      sort(a,a+n);
      vector<ll>v(n);
      int j=0;
      
      for(int i=0;i<n;i+=2){
        v[i]=a[j];
        j++;
      }
      for(int i=1;i<n;i+=2){
        v[i]=a[j];
        j++;
      }
      int k=0;
      vector<ll>u(n);
     
      for(int i=1;i<n;i+=2){
        u[i]=a[k];
        k++;
      }
      for(int i=0;i<n;i+=2){
        u[i]=a[k];
        k++;
      }
      
      bool flag=false;
      
      if(yes(v)==true){
        for(auto x:v){
            cout<<x<<" ";
        }
        cout<<'\n';
        
      }
      else if(yes(u)==true){
        for(auto x:u){
            cout<<x<<" ";
        }
        cout<<'\n';
      }
      else{
         cout<<-1<<'\n';
      }
}
  
int main(){
 
  int t;
  cin>>t;
  while(t--){
    solve();
  } 
    return 0;
}