#include<iostream>
using namespace std;

int main() {
  int a, b; cin >> a >> b;
  if ((a == 1 && b == 10) || (a == 10 && b == 1))
    cout << "Yes" << endl;
  else if ((a - b == 1) || (b - a == 1))
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
