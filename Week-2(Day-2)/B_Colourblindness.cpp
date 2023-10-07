#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n,flag=0;
        cin >> n;

        string s1,s2;
        cin >> s1 >> s2;

        for(int i=0; i<n; i++)
        {
            if(s1[i]!=s2[i] and (s1[i] == 'R' or s2[i] == 'R'))
            {
                flag = 1;
                break;
            }
        }

        if(flag==0) cout << "YES" <<endl;
        else cout << "NO" <<endl;

    }
    
    return 0;
}