#include <bits/stdc++.h>
#define ll long long int
#define nline '\n'
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    vector<vector<ll>> arr(n, vector<ll>(n - 1));
    vector<ll> count(n + 1, 0);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            cin >> arr[i][j];
            if (j == 0)
                count[arr[i][j]]++;
        }
    }

    ll firstEle = -1;

    for (int i = 0; i < n + 1; i++)
        if (count[i] == n - 1) {
            cout << i << " ";
            firstEle = i;
            break;
        }

    for (int i = 0; i < n; i++)
    {
        if (arr[i][0] != firstEle)
        for (int j = 0; j < n - 1; j++)
        {
            cout << arr[i][j] << " ";
        }
    }
    cout << nline;
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