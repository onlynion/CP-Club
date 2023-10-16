#include <bits/stdc++.h>

using namespace std;

void solve()
{
    long long k, n;
    cin >> k >> n;

    long long difference = 1, currentElement = 1;

    for (int i = 1; i <= k; i++)
    {
        cout << currentElement << " ";
        if (n - (currentElement + difference) >= (k - i - 1))
        {
            currentElement += difference;
            difference++;
        }
        else
            currentElement++;
    }

    cout << endl;
}

int main()
{
    
    int T = 1;
    cin >> T;
    while (T--) 
    {
        solve();
    }

    return 0;
}
