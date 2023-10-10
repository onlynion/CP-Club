#include <bits/stdc++.h>

using namespace std;

int main(){

    const int N = 8;

    long t; cin >> t;
    while(t--){
        vector<string> b(N);
        long row(0), col(0);
        for(long p = 0; p < N; p++){cin >> b[p];}
        for(long p = 1; p + 1 < N; p++){
            for(long q = 1; q + 1 < N; q++){
                if(b[p][q] != '#'){continue;}
                if(b[p + 1][q + 1] != '#'){continue;}
                if(b[p + 1][q - 1] != '#'){continue;}
                if(b[p - 1][q + 1] != '#'){continue;}
                if(b[p - 1][q - 1] != '#'){continue;}
                row = p + 1; col = q + 1;
            }
        }

        cout << row << " " <<col << endl;
    }
}