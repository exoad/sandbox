/*
n (1 <= n <= 1000)
mi (1 <= mi <= 10^9)
j < i < k
aj > ai < ak
ai (1 <= ai <= mi)
cats: dp bruteforce idk
*/

#include <iostream>
#include <vector>

#define F0R(n) for (int i = 0; i < n; i++)

using namespace std;
using ll = long long;
using vi = vector<ll>;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n;
  cin >> n;
  vi dp(n);
  for (int i = 0; i < n; ++i)
    cin >> dp[i];
  ll ans = 0;
  vi temp(n);
  F0R(n)
  {
    vi s(n);
    s[i] = dp[i];
    ll it = dp[i];
    ll m_max = dp[i];
    for (int j = i - 1; j >= 0; --j)
    {
      m_max = min(m_max, dp[j]);
      s[j] = m_max;
      it += m_max;
    }
    m_max = dp[i];
    for (int j = i + 1; j < n; ++j)
    {
      m_max = min(m_max, dp[j]);
      s[j] = m_max;
      it += m_max;
    }
    if (it > ans)
    {
      ans = it;
      temp = s;
    }
  }
  F0R(n)
  cout << temp[i] << " ";
  cout << endl;
}