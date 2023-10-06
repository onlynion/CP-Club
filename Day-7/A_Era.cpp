#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int total = 1, ans = 0;

        for(int i = 1; i <= n; i++){
            int a;
            cin >> a;
            if(a > total){
                ans += a - total;
                total += a - total + 1;
            }
            else total++;
        }

        cout << ans << endl;
    }
    
    return 0;
}