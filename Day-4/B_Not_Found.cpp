#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,flag=0;
    string s;
    cin >> s;

   bool present[26] = {false};

   for(char c : s)
   {
        present[c-'a'] = true;
   }

   for(int i=0; i<26; i++)
   {
        if(present[i] == false)
        {
            x = i;
            flag = 1;
            break;
        }

   }

        if(flag==1)
        {
            cout << static_cast <char>('a'+x);
        } 

        else cout << "None";






    
    return 0;
}