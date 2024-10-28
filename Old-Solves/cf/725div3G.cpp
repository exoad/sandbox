#include <iostream>

using namespace std;

bool f(int x, int y, int a, int b, int k) {
    return (x >= k * a) && (a == b || (x - k * a) / (b - a) + (y - k * a) / (b - a) >= k);
}

int t;
int main() {
    int _x, _y, a, b;
    cin >> t;
    while(t--) {
        cin >> _x >> _y >> a >> b;
        if(a > b) 
            swap(a, b);
        if(_x > _y) 
            swap(_x, _y);
        int _r = (_x + _y) / (a + b) + 1;
        int i = 0;
        while(i < _r) {
            int o = (_r + i + 1) / 2;
            if(f(_x, _y, a, b, o)) 
                i = o;
            else
               _r = o - 1;
        }
        cout << i << "\n";
    }
}
