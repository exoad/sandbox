#include <iostream>
#include <map>

#include <string.h>

#define F0R(n) for(int i=0;i<n;i++)

using ll = long long;
using namespace std;

int main()
{
	map<string, int> cum;
	ll t;
	cin >> t;
	while(t--) {
		string curr;
		ll a;
		char c;
		cin >> c >> a;
		F0R(18) {
			curr += (a & 1 ? '1' : '0');
			a /= 10;
		}
		if(c == '-') 
			cum[curr]--;
		else if (c == '+')
			cum[curr]++;
		else
			cout << cum[curr] << '\n';
		// c == '-' ? cum[curr]-- : c == '+' ? cum[curr]++ : cout << cum[curr] << '\n'; 
	}	
}
