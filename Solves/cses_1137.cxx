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
#include <cstdint>
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
#pragma GCC diagnostic ignore "-Wmaybe-uninitialized"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#pragma GCC optimize("Ofast", "unroll-loops")
#ifdef __linux__
#       include<unistd.h>
#endif
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
#   define __trace(x) cerr<<"["<<__LINE__<<"] "<<#x<<"@"<<&x<<"="<<x<<endl;
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
#ifdef __linux__
        ostream& operator<<(ostream& os,const __int128_t& v)
        {
                if (!v)
                        os<<"0";
                __int128_t tmp=v<0?(os<<"-",-v):v;
                string s;
                while (tmp)
                {
                        s+='0'+(tmp%10);
                        tmp/=10;
                }
                return reverse(all(s)),os<<s;
        }
        ostream& operator<<(ostream& os,const __uint128_t& v)
        {
                if (!v)
                        os<<"0";
                __uint128_t tmp=v;
                string s;
                while (tmp)
                {
                        s+='0'+(tmp%10);
                        tmp/=10;
                }
                return reverse(all(s)),os<<s;
        }
#endif
};
using namespace judge;
namespace generics
{
        template<typename T>
        class Graph
        {
        public:
                struct Edge
                {
                        int from;
                        int to;
                        T weight;
                        Edge(int from,int to,T weight) :from(from),to(to),weight(weight)
                        {
                        }
                };
                vector<Edge> edges;
                vector<vector<int>> ver;
                int n;
                Graph(int n) :n(n)
                {
                        ver.resize(n);
                }
                virtual int addEdge(const Edge& edge)=0;
        };
        template<typename T>
        class UndirectedGraph :public Graph<T>
        {
        public:
                UndirectedGraph(int n) :Graph<T>(n)
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
        class DirectedGraph :public Graph<T>
        {
        public:
                DirectedGraph(int n) :Graph<T>(n)
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
                UnionFind(int n) :uf(n,-1),n(n)
                {
                }
                int find(int v)
                {
                        return uf[v]<0?v:uf[v]=find(uf[v]);
                }
                bool join(int v,int w)
                {
                        if ((v=find(v))==(w=find(w)))
                                return false;
                        if (uf[v]>uf[w])
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
        template<class T>
        class BIT
        {
                private:
                        int sz;
                        vector<T> bit,arr;
                public:
                        BIT(int sz):sz(sz),bit(sz+1),arr(sz)
                        {
                        }

                        void add(int i,int v)
                        {
                                arr[i]+=v;
                                i++;
                                for(;i<=sz;i+=low_bit(i))
                                        bit[i]+=v;
                        }

                        T psum(int i)
                        {
                                i++;
                                T sum=0;
                                for(;i>0;i-=low_bit(i))
                                        sz+=bit[i];
                                return sum;
                        }

                        void set(int i,int v)
                        {
                                add(i,v-arr[i]);
                        }
        };
};
vector<vector<int>> neighbors;
vector<int> beg,last;
int timer=0;
void tour(int at,int stop)
{
        beg[at]=timer++;
        for(int n:neighbors[at])
                if(n!=stop)
                        tour(n,at);
        last[at]=timer;
}
signed main()
{
        setIO();
        int n,q;
        cin>>n>>q;
        neighbors.resize(n);
        beg.resize(n);
        last.resize(n);
        vector<int> v(n);
        for(int& x:v)
                cin>>x;
        for(int i=0;i<n-1;i++)
        {
                int a,b;
                cin>>a>>b;
                neighbors[--a].push_back(--b);
                neighbors[b].push_back(a);
        }
        tour(0,-1);
        generics::BIT<int64_t> bit(n);
        for(int i=0;i<n;i++)
                bit.set(beg[i],v[i]);
        for(int i=0;i<q;i++)
        {
                int t;
                cin>>t;
                switch(t)
                {
                        case 1:
                                int ni,v;
                                cin>>ni>>v;
                                bit.set(beg[--ni],v);
                                break;
                        case 2:
                                int nii;
                                cin>>ni;
                                cout<<(bit.psum(last[--nii]-1)-(beg[nii]==0?0:bit.psum(beg[nii]-1)))<<endl;
                                break;
                }
        }
        return 0;
}