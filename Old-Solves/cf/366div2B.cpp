#include <iostream>

#include <string.h>

#define F0R(x) for(int i=0;i<x;i++)
#define sz(a) (int)(a.size())

using namespace std;
using ll = long long;

const int MAXN = 200005; 
ll deq[MAXN], eq;
int main()
{
	string a, b;
	cin >> a >> b;
	F0R(sz(b)) 
		deq[i+1] = b[i] != '0' ? deq[i] + 1 : deq[i];
	int st = (int) (sz(b) - (sz(a) - 1));
	F0R(sz(a))
		eq += a[i] == '0' ? deq[i + st] - deq[i] : st - (deq[i + st] - deq[i]); 
	cout << eq;
}
