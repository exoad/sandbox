// WA test 58
#include <iostream>
#include <string.h>
#include <vector>
using namespace std;
#define I64 long long
#define I32 int
#define STR string
I32 main()
{
      I32 n;
      I32 m;
      cin>>n>>m;
      // 576 2
      // X 578
      // V 576
      cout<<(n==1||m==1?(m+n)-1:n==2||m==2?(n+m==6||(n+m%4==2)?(n+m)-2:(n+m)/2*2):(n*m+1)/2);
}