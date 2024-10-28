//671div2A, exoad//

#include<iostream>

using namespace std;

int t;
int main() {
    cin >> t;
    while(t--) {
        int n;
        string sn;
        bool bl = 0;
        cin >> n >> sn;
        if(n % 2 == 0) {
            bl = 1;
            for(int i = 1; i < n; i += 2) {
                if((sn[i] - '0') % 2 == 0) {
                    bl = 0;
                    break;
                }
            }
        } else {
            bl = 0;
            for(int i = 0 ; i < n; i += 2) {
                if ((sn[i] - '0') % 2 == 1) {
                    bl = 1;
                    break;
                }
            }
        }
        if(bl) 
            cout << 1 << endl;
        else 
            cout << 2 << endl;
    }
}
//end//
