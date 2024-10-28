#include<bits/stdc++.h>
#define elif else if
using namespace std;

void solve(char a, char b) {
  int ax = 0;
  int bx = 0;
  if(a == 'R') ax = 3;
  if(a == 'B') ax = 2;
  if(a == 'G') ax = 1;

  if(b == 'R') bx = 3;
  if(b == 'B') bx = 2;
  if(b == 'G') bx = 1;

  if(ax < bx) cout << b << endl;
  elif(bx > ax) cout << a << endl;
  else cout << a << endl;
}

int main() {
  char parent1, parent2;
  cin >> parent1 >> parent2;
  solve(parent1, parent2);
}
