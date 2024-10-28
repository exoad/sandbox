#include <iostream>
using namespace std;

int main() {
	int t, max = 0, win = 1, a1 = 0, b1 = 0;
	cin >> t;
	while (t--){
	    int a,b;
	    cin >> a >> b;
	    a = a + a1;
	    b = b + b1;
	    if(a > b){
	        if((a - b) > max){
	            max = a - b;
	            win = 1;
	        }
	    }
	    else {
	        if((b - a) > max){
	            max = b - a;
	            win = 2;
	        }
	    }
	    a1 = a;
	    b1 = b;
	}
	cout << win << " " << max;
	return 0;
}
