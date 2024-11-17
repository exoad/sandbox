#include <iostream>
#include <vector>
#include <utility>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <cstring>
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-result"
#pragma GCC diagnostic ignored "-Wpragmas"
#pragma GCC diagnostic ignored "-Wunused-function"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#pragma GCC diagnostic ignored "-Wunused-but-set-parameter"
#pragma GCC diagnostic ignored "-Wwrite-strings"
#pragma GCC diagnostic ignored "-Wunused-local-typedefs"
#pragma GCC diagnostic ignored "-Wunused-but-set-label"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#pragma GCC diagnostic ignored "-Wmissing-braces"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC target "avx2"
#pragma GCC optimize "-funroll-loops"
#pragma GCC optimize "-Ofast"
// using namespace __gnu_pbds;
using ll=long long;
using namespace std;
namespace FASTIO
{
#define fast_io
#define IOSIZE 100000
    char ibuf[IOSIZE],obuf[IOSIZE];
    char* p1=ibuf,* p2=ibuf,* p3=obuf;
#ifdef ONLINE_JUDGE
#define getchar() ((p1 == p2)&&(p2 = (p1 = ibuf) + fread(ibuf, 1, IOSIZE,
    stdin),p1==p2)?(EOF):(*p1++))
#define putchar(x) ((p3==obuf+IOSIZE)&&(fwrite(obuf,p3-obuf,1,stdout),p3=obuf),*p3++=x)
#endif
#define isdigit(ch) (ch>47&&ch<58)
#define isspace(ch) (ch<33)
        template <typename T>inline T read()
    {
        T s=0;
        int w=1;
        char ch;
        while (ch=getchar(),!isdigit(ch)&&(ch!=EOF))
            if (ch=='-')
                w=-1;
        if (ch==EOF)
            return false;
        while (isdigit(ch))
            s=s*10+ch-48,ch=getchar();
        return s*w;
    }
    template <typename T>
    inline bool read(T& s)
    {
        s=0;
        int w=1;
        char ch;
        while (ch=getchar(),!isdigit(ch)&&(ch!=EOF))
            if (ch=='-')
                w=-1;
        if (ch==EOF)
            return false;
        while (isdigit(ch))
            s=s*10+ch-48,ch=getchar();
        return s*=w,true;
    }
    inline bool read(char& s)
    {
        while (s=getchar(),isspace(s))
        {}
        return true;
    }
    inline bool read(char* s)
    {
        char ch;
        while (ch=getchar(),isspace(ch))
            ;
        if (ch==EOF)
            return false;
        while (!isspace(ch))
            *s++=ch,ch=getchar();
        *s='\000';
        return true;
    }
    template <typename T>
    inline void print(T x)
    {
        if (x<0)
        {
            putchar('-');
            x=-x;
        }
        if (x>9)
            print(x/10);
        putchar(x%10+48);
    }
    inline void print(char x)
    {
        putchar(x);
    }
    inline void print(char* x)
    {
        while (*x)
            putchar(*x++);
    }
    inline void print(const char* x)
    {
        for (int i=0; x[i]; i++)
            putchar(x[i]);
    }
#ifdef _GLIBCXX_STRING
    inline bool read(string& s)
    {
        s="";
        char ch;
        while (ch=getchar(),isspace(ch))
        {}
        if (ch==EOF)
            return false;
        while (!isspace(ch))
            s+=ch,ch=getchar();
        return true;
    }
    inline void print(string x)
    {
        for (int i=0,n=x.size(); i<n; i++)
            putchar(x[i]);
    }
#endif
    template <typename T,typename... T1>
    inline int read(T& a,T1 &...other)
    {
        return read(a)+read(other...);
    }
    template <typename T,typename... T1>
    inline void print(T a,T1... other)
    {
        print(a);
        print(other...);
    }
    struct fastIO
    {
        ~fastIO()
        {
            fwrite(obuf,p3-obuf,1,stdout);
        }
    } io;
    template <typename T>
    fastIO& operator>>(fastIO& io,T& b)
    {
        return read(b),io;
    }
    template <typename T>
    fastIO& operator<<(fastIO& io,T b)
    {
        return print(b),io;
    }
}
using namespace FASTIO;
#define cin io
#define cout io
#define endl '\n'
int main()
{
}