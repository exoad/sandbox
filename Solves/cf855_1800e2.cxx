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
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#pragma GCC optimize("Ofast", "unroll-loops")
#include <algorithm>
#include <array>
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <utility>
#include <bitset>
#include <unordered_map>
#include <unordered_set>
#include <stack>
#include <bitset>
#include <cmath>
#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
using namespace std;
using ll=long long;
using ull=unsigned long long;
using ld=long double;
using str=string;
#define TRUE 1
#define FALSE 0
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define eb emplace_back
#define RANGE(a,b) for(int i=a;i<=b;i++)
#define PI 3.14159265358979323846
#ifdef LOCAL_JUDGE_HOST
#   define __trace(x) cout<<"TRACE: ["<<__LINE__<<"] "<<#x<<"@"<<&x<<"="<<x<<endl;
#else
#   define __trace(x)
#endif
namespace judge
{
    template<typename T>
    inline void partial_sum(vector<T> x)
    {
        partial_sum(all(x),x.begin());
    }

    inline void setIO(str name="") 
    {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        if (int(name.size())) 
        {
            freopen((name+".in").c_str(),"r",stdin); 
            freopen((name+".out").c_str(),"w",stdout);
        }
    }
    int gcd(int a,int b)
    {
        return a==0||a==b?b:b==0||b%a==0?a:a>b?gcd(b,a):gcd(a,b%a);
    }
    inline int low_bit(int x)
    {
        return x&(-x);
    }
    ostream& operator<<(ostream& os,const __int128_t& v) 
    {
        if(!v) 
            os<<"0";
        __int128_t tmp=v<0?(os<<"-",-v):v;
        string s;
        while(tmp) 
        {
            s+='0'+(tmp%10);
            tmp/=10;
        }
        return reverse(all(s)),os<<s;
    }
    ostream& operator<<(ostream& os,const __uint128_t& v) 
    {
        if(!v) 
            os<<"0";
        __uint128_t tmp=v;
        string s;
        while(tmp)
        {
            s+='0'+(tmp%10);
            tmp/=10;
        }
        return reverse(all(s)),os<<s;
    }
};
using namespace judge;
namespace generics 
{
/*
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
    using namespace __gnu_pbds;
    template <typename T> 
    using ordered_set=tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;
*/
    template<typename T>
    class Graph 
    {
        public:
            struct Edge 
            {
                int from;
                int to;
                T weight;
                Edge(int from,int to,T weight):from(from),to(to),weight(weight)
                {
                }
            };
            vector<Edge> edges;
            vector<vector<int>> ver;
            int n;
            Graph(int n):n(n)
            {
                ver.resize(n);
            }
            virtual int addEdge(const Edge& edge)=0;
    };
    template<typename T>
    class UndirectedGraph:public Graph<T> 
    {
        public:
            UndirectedGraph(int n):Graph<T>(n)
            {
            }
            int addEdge(const typename Graph<T>::Edge& edge) override
            {
                assert(0<=edge.from&&edge.from<Graph<T>::n&&0<=edge.to&&edge.to<Graph<T>::n);
                int id=(int)Graph<T>::edges.size();
                Graph<T>::ver[edge.from].pb(id);
                Graph<T>::g[edge.to].pb(id);
                Graph<T>::edges.pb(edge);
                return id;
            }
    };
    template<typename T>
    class DirectedGraph:public Graph<T>
    {
        public:
            DirectedGraph(int n):Graph<T>(n)
            {
            }
            int addEdge(const typename Graph<T>::Edge& edge) override
            {
                assert(0<=edge.from&&edge.from<Graph<T>::n&&0<=edge.to&&edge.to<Graph<T>::n);
                int id=(int)Graph<T>::edges.size();
                Graph<T>::g[edge.from].pb(id);
                Graph<T>::edges.pb(edge);
                return id;
            }
    };
    struct UnionFind 
    {
        vector<int> uf;
        int n;
        UnionFind(int n):uf(n,-1),n(n)
        {
        }
        int find(int v)
        {
            return uf[v]<0?v:uf[v]=find(uf[v]);
        }
        bool join(int v, int w) 
        {
            if((v=find(v))==(w=find(w))) 
                return false;
            if(uf[v]>uf[w]) 
                ::swap(v,w);
            uf[v]+=uf[w];
            uf[w]=v;
            n--;
            return true;
        }
        bool connected(int v,int w) 
        {
            return find(v)==find(w);
        }
        int size(int v) 
        {
            return -uf[find(v)];
        }
    };
};
#define i32 int
#define i64 long long
#define str string
#define u16 short
#define u8 char
#define u16 short
#define f64 double
#define u64 unsigned i64
#define u32 unsigned i32
signed main()
{
    setIO();
    i32 t;
    cin>>t;
    while(t--)
    {
        i32 n,k;
        bool ans=FALSE;
        cin>>n>>k;
        str s,t;
        cin>>s>>t;
        vector<i32> ix(26,0);
        RANGE(0,n-1)
        {
            if(i+k<n||i>=k)
            {
                ix[s[i]-'a']--;
                ix[t[i]-'a']--;
            }
            else
                ans&=s[i]==t[i];
        }
        cout<<"\n";
        __trace(ans);
        cout<<(ans==TRUE&&count(all(ix),0)==26?"YES":"NO")<<endl;
    }
    return 0;
}