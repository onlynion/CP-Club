#include <bits/stdc++.h>
using namespace std;

void search(vector<int>& leafNums, vector<vector<int>>& adjLists, int node, int parent) {
    for (int adj : adjLists[node]) {
        if (adj != parent) {
            search(leafNums, adjLists, adj, node);
            leafNums[node] += leafNums[adj];
        }
    }

    leafNums[node] = max(1, leafNums[node]);
}

void solve(vector<int>& u, vector<int>& v, vector<int>& x, vector<int>& y) {
    int n = u.size() + 1;

    vector<vector<int>> adjLists(n);
    for (int i = 0; i < n; ++i) {
        adjLists[i] = vector<int>();
    }

    for (int i = 0; i < u.size(); ++i) {
        adjLists[u[i]].push_back(v[i]);
        adjLists[v[i]].push_back(u[i]);
    }

    vector<int> leafNums(n, 0);
    search(leafNums, adjLists, 0, -1);

    for (int i = 0; i < x.size(); ++i) {
        long long result = static_cast<long long>(leafNums[x[i]]) * leafNums[y[i]];
        cout << result << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> u(n - 1);
        vector<int> v(n - 1);
        for (int i = 0; i < n - 1; ++i) {
            cin >> u[i] >> v[i];
            u[i]--, v[i]--;
        }
        int q;
        cin >> q;
        vector<int> x(q);
        vector<int> y(q);
        for (int i = 0; i < q; ++i) {
            cin >> x[i] >> y[i];
            x[i]--, y[i]--;
        }

        solve(u, v, x, y);
    }

    return 0;
}
