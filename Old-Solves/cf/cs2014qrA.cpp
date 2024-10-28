#include <iostream>
#define speed                       \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL)
#define weak cout << "Too weak" << endl

using namespace std;
int main() {
  speed;
  string s;
  cin >> s;
  if (s.find_first_of("abcdefghijklmnopqrstuvwxyz") != string::npos &&
      s.find_first_of("ABCDEFGHIJKLMNOPQRSTUVWXYZ") != string::npos &&
      s.length() >= 5 && s.find_first_of("1234567890") != string::npos)
    cout << "Correct" << endl;
  else
    weak;
}
