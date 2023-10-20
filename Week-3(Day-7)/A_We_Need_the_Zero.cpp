#include <bits/stdc++.h>
#define ll long long int
#define nline '\n'
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    ll arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    ll xOR = 0;
    for (int i = 0; i < n; i++)
        xOR = (arr[i] ^ xOR);

    if (xOR == 0)
        cout << 0 << nline;
    else if (n & 1)
        cout << xOR << nline;
    else
        cout << -1 << nline;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll T = 1;
    cin >> T;
    while (T--) 
    {
        solve();
    }

}