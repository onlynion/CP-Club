#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9+7;

void solve()
{
    long long int n, k;
    cin >> n >> k;
    long long int count = 1;
    for(long long int i = 0; i < n; i++)
    {
        if(k > 0)
        {
            count = (count*k)%MOD;
            k--;
        }
        else break;
    }
    cout << count << endl;
}



int main() 
{
	int t;
	cin >> t;
	while(t--)
	{
	    solve();
	}
	return 0;
}