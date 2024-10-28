#include <iostream>
#include <string>
#include <vector>

using namespace std;

int t;
int main()
{
    cin >> t;
    int q[t][3];
    for (int i = 0; i < t; i++)
        for (int j = 0; j < 3; j++)
            cin >> q[i][j];
    int r = 0, k = 0;
    for (int i = 0; i < t; i++)
    {
        r = 0;
        for (int j = 0; j < 3; j++)
        {
            if (q[i][j] == 1)
                r++;
        }
        if (2 <= r)
            k++;
    }
    cout << k << "\t";
}
