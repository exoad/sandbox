#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull long long unsigned int
#define nl "\n"

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int *a = new int[n];
        int mini = 1000000, maxi = -1, x = 0, y = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] < mini)
                x = i + 1;
            if (a[i] > maxi)
                y = i + 1;
            mini = min(mini, a[i]);
            maxi = max(maxi, a[i]);
        }
        cout << min(x + 1 + (n - y), min(n - x + y + 1, min(max(x, y), n - min(x, y) + 1))) << nl;
    }

    return 0;
}
