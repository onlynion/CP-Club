#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        string s1="Timur",s2;
        cin >> s2;

        

        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());

        if(s1.size()!= s2.size()) cout << "NO" << endl;
        else
        {
            bool flag = true;
            for(int i=0; i<s1.size(); i++)
            {
                if(s1[i]!=s2[i])
                {
                    flag = false;
                    
                }
            }

                if(flag == false) cout << "NO" << endl;

                else cout << "YES" << endl;
        }
    }
    
    return 0;
}