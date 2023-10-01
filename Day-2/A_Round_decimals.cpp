#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x;
    cin >> x;

    if((x-floor(x))>= 0.500) cout << ceil(x);
    else cout << floor(x);
    
    return 0;
}