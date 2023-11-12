#include <iostream>
using namespace std;
int main() 
{
    int T;
    cin>>T;
    while(T--)
    {
        int a,b;
        cin>>a>>b;
        if(b*2>=a)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}