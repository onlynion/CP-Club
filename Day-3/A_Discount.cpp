#include <bits/stdc++.h>
using namespace std;

int main()
{
    long double a,b;

    cin >> a >> b;

    long double discount = 100*(1-(b/a));

    cout << setprecision(20)<< discount ;
    
    return 0;
}