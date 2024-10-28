#include <iostream>

using namespace std;

int t;
int main()
{
    long long int x = 1;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++) {
        x = x * i;
    }
    x = x * 2;
    x = x / (t * t);
    printf("%lld", x);
    return 0;
}
