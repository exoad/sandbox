#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--) {
		int s1, s2, s3, s4;
		cin >> s1 >> s2 >> s3 >> s4;
		cout << (max(s1, s2) < min(s3, s4) || min(s1, s2) > max(s3, s4) ? "NO" : "YES") << '\n'; 
	}
}
