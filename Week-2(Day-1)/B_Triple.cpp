#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,k; 
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int flag = 0;
        int cnt = 1;

        
                    int a[n];
                for(int i=0; i<n; i++)
                {
                    cin >> a[i];
                }

                sort(a,a+n);

        if(n<3) cout << "-1" << endl;

        else
        {

                for(int i=0; i<n; i++)
                {
                    if(i+1<n and a[i+1]==a[i])
                    {
                        cnt=cnt+1;
                        if(cnt==3)
                        {
                            k=a[i+1];
                            flag=1;
                            break;
                        }
                    }

                    else
                    {
                        cnt=1;
                    }
                    
                }

                    if(flag==1) cout << k << endl;
                    else  cout << "-1" << endl;
                }
    }
    
    return 0;
}