#include<bits/stdc++.h>
#define el else if
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int x;
        cin >> x;
        if(x > 65) 
            cout << "Overload" << endl;
        el(x < 35)
            cout << "Underload" << endl;
        else
            cout << "Normal" << endl;
    }
}
