#include <bits/stdc++.h>

#define SIZE 100005

using namespace std;

int a[SIZE];
int n;

void update(int i, int val)
{
    while (i <= n)
    {
        a[i] = a[i] + val;
        i = i + (i & (-i));
    }
}

long long query(int i)
{
    long long ans = 0;

    while (i > 0)
    {
        ans = ans + a[i];
        i = i - (i & (-i));
    }

    return ans;
}

int main()
{
    int t;
    int x;
    int y;
    int w;
    long long ans;
    int q;
    int ch;

    cin >> t;

    for (int cs = 1; cs <= t; cs++)
    {
        cin >> n >> q;

        memset(a, 0, sizeof a);

        for (int i = 1; i <= n; i++)
        {
            cin >> x;
            update(i, x);
        }

        cout << "Case " << cs << ":\n";
        for (int i = 0; i < q; i++)
        {
            cin >> ch;

            if (ch == 1)
            {
                cin >> x;
                x++;
                ans = query(x) - query(x - 1);
                update(x, -ans);
                cout << ans << "\n";
            }
            else if (ch == 2)
            {
                cin >> x;
                x++;
                cin >> w;
                update(x, w);
            }
            else if (ch == 3)
            {
                cin >> x >> y;
                x++;
                y++;
                ans = query(y) - query(x - 1);
                cout << ans << "\n";
            }
        }
    }

    return 0;
}
