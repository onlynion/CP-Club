#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        vector<int> a(4);
        for (int j = 0; j < 4; j++)
            cin >> a[j];
        int maxpos = max_element(a.begin(), a.end()) - a.begin();
        int minpos = min_element(a.begin(), a.end()) - a.begin();
        if (maxpos + minpos == 3)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
