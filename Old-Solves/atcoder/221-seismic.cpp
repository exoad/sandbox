#include<bits/stdc++.h>
using namespace std;
int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int A, B, f = 1;
	cin >> A >> B;
	if(A != B) 
		for(int i = 0; i < A - B; i++)
			f *= 32;
	cout << f;
	return 0;
}
