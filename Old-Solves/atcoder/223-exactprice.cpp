#include<iostream>

using namespace std;

int main() {
  int x;
  cin >> x;
  cout << ((x % 100 == 0) && (x != 0) ? "Yes" : "No") << endl;
}