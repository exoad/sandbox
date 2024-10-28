//not the best of solutions and any constraints are not hardcoded allowing for additional mem usage

#include<bits/stdc++.h>
#define MAX 26
using namespace std;

int prima(int n) {
	int f = 1;
	for(int i = 2; i <= n; i++) 
		f *= i;
	return f;
}

int solve(string s) {
	int len = s.length();
	int f[MAX];
	memset(f, 0, sizeof(f));
	for(int i = 0; i < len; i++) 
		if(s[i] >= 'a')
			f[s[i] - 'a']++;
			
	int fa = 1;
	for(int i = 0; i < MAX; i++) 
		fa *= prima(f[i]);
		
	return prima(len) / fa;
}

int main() {
	string s;
	cin >> s;
	cout << solve(s) << endl;
}
