#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
if(x%10==0){
    cout<<100-x<<endl;
}
else{
 int c =(x+5)/10*10;
 cout<<100-c<<endl;
}
    }

    return 0;
}