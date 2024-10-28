#include <iostream>
#include <map>

#include <string.h>

#define F0R(x) for(int i=0;i<x;i++)
#define FOR(h,x) for(int i=h;i<x;i++)

using namespace std;

char n_i[3][1010][4];
int main()
{
	int n;
	cin >> n;
	while(n--) {
		int nt;
		cin >> nt;
		map<string, int> a;
		for(int i = 0; i <= 2; i++) {
			for(int j = 1; j <= nt; j++) {
				cin >> n_i[i][j];
				a[n_i[i][j]]++;
			}
		}
		int at[3] = {0};
		for(int i = 0; i <= 2; i++) {
			for(int j = 1; j <= nt; j++) {
				/*
    if a word was written by one person — that person gets 3 points,
    if a word was written by two people — each of the two gets 1 point,
    if a word was written by all — nobody gets any points. 
				*/   
				if(a[n_i[i][j]] == 1)
					at[i] += 3;
				if(a[n_i[i][j]] == 2)
					at[i] += 1;
			}
		}
		for(auto x : at)
			cout << x << " ";
		cout << '\n';
	}
}
