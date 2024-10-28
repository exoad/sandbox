#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n,m,d,D;
	    cin >> n >> m >> d >> D;
	    
	    int q = m / n;
	    int p = m % n;
	    
	    if((q + (p > 0)) <= min(D, n) && q >= d){
	        for(int i = 0; i < n; i++){
	            for(int j = 0; j< (q + (p > 0)); j++){
	                cout << i + 1 << " " << ((i + j) % n) + 1 << endl;
	            }
	            p--;
	        }
	    } else {
	        cout << -1 << endl;
	    }
	}
	return 0;
}
