#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    while(s.size()<4)
    {
        s.replace(0,0,"0");
    }

    cout << s;
    
    return 0;
}