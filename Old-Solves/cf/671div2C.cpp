//671div2C exoad//
#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int t, n, x;
int P[1000];
int main() {
    cin >> t;
    while(t--) {
        cin >> n >> x;
        int d = 0, e = 0;
        for(int i = 0; i < n; i++) {
            cin >> P[i];
            d += P[i]-x;
            if(P[i] == x) 
                e++;
        }
        if (e == n && d == 0)
            cout << "0" << endl;
        else if ((d == 0 && e != n) || (e >= 1))
            cout << "1" << endl;
        else
            cout << "2" << endl;
    }
}
//end//
