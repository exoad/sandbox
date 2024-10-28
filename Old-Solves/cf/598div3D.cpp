#include <bits\stdc++.h>
using namespace std;
#define int long long
const int N = 1e6 + 7;
char s[N];
signed main()
{
    int t, n, m;
    cin >> t;
    while (t--)
    {
        cin >> n >> m >> s + 1;

        int i = 1, num = 1;
        while (s[num] == '0')
            num++, i++;
        for (; i <= n; i++)
        {
            if (s[i] == '0')
            {
                if (i - num < m)
                {
                    swap(s[i], s[num]);
                    m -= (i - num);
                    num++;
                }
                else if (i - num >= m)
                {
                    swap(s[i], s[i - m]);
                    m = 0;
                    break;
                }
            }
        }
        cout << s + 1 << endl;
    }
    return 0;
}
