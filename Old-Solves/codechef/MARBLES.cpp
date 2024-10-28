#include <iostream>
using namespace std;

long long int c(int n,int k){
    long long int fact = 1;
    if(k > n / 2){
        k = n - k;
    }
    for(int i = 1; i <= k; i++){
        fact = (fact * n) / i;
        n--;
    }
    return fact;
}
int main() {
	int t;
	cin >> t;
	while(t--){
	    long long int n, k;
	    cin >> n >> k;
	    cout << c(n - 1, k - 1) << endl;
	}
	return 0;
}
