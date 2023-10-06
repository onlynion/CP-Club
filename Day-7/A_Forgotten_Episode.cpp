#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,mn;
    cin >> n;

    int a[n];

    for(int i=0; i<n-1; i++)
    {
        cin >> a[i];
    }

    sort(a,a+n-1);

    mn = n;

    for(int i=0; i<n-1; i++)
    {
        if(a[i]!=i+1) 
        {
           mn=i+1;
           break; 
        }
    }

    cout <<mn;
    return 0;
}