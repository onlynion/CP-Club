#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if(a > b)swap(a, b);

    for(int i = 0; a * i <= c; i++){
        if((c - a * i) % b == 0){
            cout << "Yes\n";
            return 0;
        }
    }

    cout << "No\n";

    return 0;
}