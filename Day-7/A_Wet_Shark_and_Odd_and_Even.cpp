#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long a[n];

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    sort(a,a+n);

    long long sum = 0;

    for(int i=0; i<n; i++)
    {
        sum=sum+a[i];
    }

    if(sum%2==0) cout << sum;
    else 
    {
        for(int i=0; i<n; i++)
        {
            if((sum-a[i])%2==0) 
            {
                cout << sum-a[i];
                break;
            }
        }
    }
    
    return 0;
}