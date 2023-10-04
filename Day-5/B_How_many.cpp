#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s,t,count=0;;
    cin  >> s >> t;

    for(int a=0; a<=s; a++)
    {
        for(int b=0; a+b<=s; b++)
        {
            for(int c=0; a+b+c<=s; c++)
            {
                if(a*b*c <= t) count++;
            }
        }
    }

    cout << count;
    
    return 0;
}