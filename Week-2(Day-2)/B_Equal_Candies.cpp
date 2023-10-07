#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n,sum=0;
        cin >> n;

        int a[n];

        for(int i=0; i<n; i++) cin >> a[i];
        sort(a,a+n);

        for(int i=1; i<n; i++)
        {
            if(a[0]==a[i]) continue;
            else sum = sum + (a[i]-a[0]);

        }

        cout << sum << endl;
    }
    
    return 0;
}