#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin >> n >> x;

    vector<int> v;
    int a[n];

    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n; i++) 
    {
        if(a[i]!=x) v.push_back(a[i]);
    }

    if(v.size()==0) cout << " ";
    else
    {
        for(int i=0; i<v.size(); i++)
        {
            cout << v[i] << " ";
        }
    }


    
    return 0;
}