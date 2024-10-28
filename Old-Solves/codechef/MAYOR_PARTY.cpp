#include<bits/stdc++.h>
#define el else if
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;
        if(a + c >= b) 
            cout << a + c << endl;
        else
            cout << b << endl;
    }
}
