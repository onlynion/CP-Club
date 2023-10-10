#include <bits/stdc++.h>
using namespace std;



int main()
{
    int n;
    cin >> n;

    int a[n];

    for(int i=0; i<n; i++) cin >> a[i];

    int q;
    cin >> q;

    while(q--)
    {
        int j,k,sum=0;
        cin >> j >> k;

        if(j==k) cout << a[j] << endl;
        else
        {
            for(int i=j; i<=k; i++)
            {
                sum += a[i];
            }

            cout << sum << endl;
        }
    }

    
    return 0;
}