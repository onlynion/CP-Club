#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,cnt=0;;
    cin >> n >> k;

    for(int i=0; i<n; i++)
    {
        int d;
        cin >> d;

        if(d%k==0) cnt++;
    }

    cout << cnt;

    
    return 0;
}