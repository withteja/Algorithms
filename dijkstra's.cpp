    //
    //#include <iostream>
    //#include <string>
    //#include <vector>
    //#include <algorithm>
    //#include <sstream>
    //#include <queue>
    //#include <deque>
    //#include <bitset>
    //#include <iterator>
    //#include <list>
    //#include <stack>
    //#include <map>
    //#include <set>
    //#include <functional>
    //#include <numeric>
    //#include <utility>
    //#include <limits>
    //#include <time.h>
    //#include <math.h>
    //#include <stdio.h>
    //#include <string.h>
    //#include <stdlib.h>
    //#include <assert.h>
    //
    //using namespace std;
    //
    ///*******  All Required define Pre-Processors and typedef Constants *******/
    //#define SCD(t) scanf("%d",&t)
    //#define SCLD(t) scanf("%ld",&t)
    //#define SCLLD(t) scanf("%lld",&t)
    //#define SCC(t) scanf("%c",&t)
    //#define SCS(t) scanf("%s",t)
    //#define SCF(t) scanf("%f",&t)
    //#define SCLF(t) scanf("%lf",&t)
    //#define MEM(a, b) memset(a, (b), sizeof(a))
    //#define FOR(i, j, k, in) for (int i=j ; i<k ; i+=in)
    //#define RFOR(i, j, k, in) for (int i=j ; i>=k ; i-=in)
    //#define REP(i, j) FOR(i, 0, j, 1)
    //#define RREP(i, j) RFOR(i, j, 0, 1)
    //#define all(cont) cont.begin(), cont.end()
    //#define rall(cont) cont.end(), cont.begin()
    //#define FOREACH(it, l) for (auto it = l.begin(); it != l.end(); it++)
    //#define IN(A, B, C) assert( B <= A && A <= C)
    //#define MP make_pair
    //#define PB push_b\ack
    //#define INF (int)1e9
    //#define EPS 1e-9
    //#define PI 3.1415926535897932384626433832795
    //#define MOD 1000000007
    //#define read(type) readInt<type>()
    //const double pi=acos(-1.0);
    //typedef pair<int, int> PII;
    //typedef vector<int> VI;
    //typedef vector<string> VS;
    //typedef vector<vector<string> > VVS;
    //typedef vector<PII> VII;
    //typedef vector<VI> VVI;
    //typedef map<int,int> MPII;
    //typedef set<int> SETI;
    //typedef multiset<int> MSETI;
    //typedef long int int32;
    //typedef unsigned long int uint32;
    //typedef long long int int64;
    //typedef unsigned long long int  uint64;
    //
    ///****** Template of some basic operations *****/
    //template<typename T, typename U> inline void amin(T &x, U y) { if(y < x) x = y; }
    //template<typename T, typename U> inline void amax(T &x, U y) { if(x < y) x = y; }
    ///**********************************************/
    //
    ///****** Template of Fast I/O Methods *********/
    //template <typename T> inline void write(T x)
    //{
    //    int i = 20;
    //    char buf[21];
    //        // buf[10] = 0;
    //    buf[20] = '\n';
    //    
    //    do
    //        {
    //        buf[--i] = x % 10 + '0';
    //        x/= 10;
    //        }while(x);
    //    do
    //        {
    //        putchar(buf[i]);
    //        } while (buf[i++] != '\n');
    //}
    //
    //template <typename T> inline T readInt()
    //{
    //    T n=0,s=1;
    //    char p=getchar();
    //    if(p=='-')
    //        s=-1;
    //    while((p<'0'||p>'9')&&p!=EOF&&p!='-')
    //        p=getchar();
    //    if(p=='-')
    //        s=-1,p=getchar();
    //    while(p>='0'&&p<='9') {
    //        n = (n<< 3) + (n<< 1) + (p - '0');
    //        p=getchar();
    //    }
    //    
    //    return n*s;
    //}
    ///************************************/
    //
    //
    ///******* Debugging Class Template *******/
    //#define DEBUG
    //
    //#ifdef DEBUG
    //
    //#define debug(args...)     (Debugger()) , args
    //
    //class Debugger
    //{
    //public:
    //    Debugger(const std::string& _separator = " - ") :
    //    first(true), separator(_separator){}
    //    
    //    template<typename ObjectType> Debugger& operator , (const ObjectType& v)
    //    {
    //    if(!first)
    //        std:cerr << separator;
    //    std::cerr << v;
    //    first = false;
    //    return *this;
    //    }
    //    ~Debugger() {  std:cerr << endl;}
    //    
    //private:
    //    bool first;
    //    std::string separator;
    //};
    //
    //#else
    //#define debug(args...)                  // Just strip off all debug tokens
    //#endif
    //
    ////
    ////int main (){
    ////    
    ////    int t;
    ////    cin>>t;
    ////    while (t--){
    ////        int a,b,c,r;
    ////        cin>>a>>b>>c>>r;
    ////        if(b<a)swap(a,b);
    ////        int cl=c-r;
    ////        int cr=c+r;
    //////        cout<<cl<<" "<<cr<<endl;
    ////        if(cl<=a&&cr>=b){
    ////            cout<<"a"<<endl;
    ////            cout<<(b-a)+b-a<<endl;
    ////        }
    ////        else if(cl<a&&(cr<b&&cr>=a)){
    ////             cout<<"b"<<endl;
    ////            cout<<(b-a)+cr-a<<endl;
    ////        }
    ////        else if(cl>a&&(cr<b&&cr>=a)){
    ////             cout<<"c"<<endl;
    ////            cout<<(b-a)+cr-cl<<endl;
    ////        }
    ////        else if((cl>a&&cl<=b)&&cr>b){ cout<<"d"<<endl;
    ////            cout<<(b-a)+b-cl<<endl;
    ////        }
    ////        else if((cl>b&&cr>b)||(cl<a&&cr<a)){
    ////             cout<<"e"<<endl;
    ////            cout<<"0"<<endl;
    ////        }
    ////       
    ////           
    ////        }
    ////    
    ////        
    ////    
    ////    
    ////    
    ////    return 0;
    ////}
    ////
    //
    //

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;

/*******  All Required define Pre-Processors and typedef Constants *******/
#define SCD(t) scanf("%d",&t)
#define SCLD(t) scanf("%ld",&t)
#define SCLLD(t) scanf("%lld",&t)
#define SCC(t) scanf("%c",&t)
#define SCS(t) scanf("%s",t)
#define SCF(t) scanf("%f",&t)
#define SCLF(t) scanf("%lf",&t)
#define MEM(a, b) memset(a, (b), sizeof(a))
#define FOR(i, j, k, in) for (int i=j ; i<k ; i+=in)
#define RFOR(i, j, k, in) for (int i=j ; i>=k ; i-=in)
#define REP(i, j) FOR(i, 0, j, 1)
#define RREP(i, j) RFOR(i, j, 0, 1)
#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.end(), cont.begin()
#define FOREACH(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define IN(A, B, C) assert( B <= A && A <= C)
#define MP make_pair
#define PB push_b\ack
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define read(type) readInt<type>()
const double pi=acos(-1.0);
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<vector<string> > VVS;
typedef vector<PII> VII;
typedef vector<VI> VVI;
typedef map<int,int> MPII;
typedef set<int> SETI;
typedef multiset<int> MSETI;
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;

/****** Template of some basic operations *****/
template<typename T, typename U> inline void amin(T &x, U y) { if(y < x) x = y; }
template<typename T, typename U> inline void amax(T &x, U y) { if(x < y) x = y; }
/**********************************************/

/****** Template of Fast I/O Methods *********/
template <typename T> inline void write(T x)
{
    int i = 20;
    char buf[21];
        // buf[10] = 0;
    buf[20] = '\n';
    
    do
        {
        buf[--i] = x % 10 + '0';
        x/= 10;
        }while(x);
    do
        {
        putchar(buf[i]);
        } while (buf[i++] != '\n');
}

template <typename T> inline T readInt()
{
    T n=0,s=1;
    char p=getchar();
    if(p=='-')
        s=-1;
    while((p<'0'||p>'9')&&p!=EOF&&p!='-')
        p=getchar();
    if(p=='-')
        s=-1,p=getchar();
    while(p>='0'&&p<='9') {
        n = (n<< 3) + (n<< 1) + (p - '0');
        p=getchar();
    }
    
    return n*s;
}
/************************************/


/******* Debugging Class Template *******/
#define DEBUG

#ifdef DEBUG

#define debug(args...)     (Debugger()) , args

class Debugger
{
public:
    Debugger(const std::string& _separator = " - ") :
    first(true), separator(_separator){}
    
    template<typename ObjectType> Debugger& operator , (const ObjectType& v)
    {
    if(!first)
        std:cerr << separator;
    std::cerr << v;
    first = false;
    return *this;
    }
    ~Debugger() {  std:cerr << endl;}
    
private:
    bool first;
    std::string separator;
};

#else
#define debug(args...)                  // Just strip off all debug tokens
#endif



VI b,d;
vector<vector<pair<int,int>>> g;
void addedge(int a,int b,int wt){
    g[a].push_back(MP(b,wt));
}
void dij(int i)
{
    priority_queue<PII,VII,greater<PII>> pq;
    
    pq.push(MP(0,i));
    d[i]=0;
    while(!pq.empty())
        {
        int u=pq.top().second;
        
        pq.pop();
        for(int i =0;i<g[u].size();i++)
            {
            int v=g[u][i].first;
            int wt=g[u][i].second;
            if(d[v]>d[u]+wt)
                {
                d[v]=d[u]+wt;
                pq.push(MP(d[v],v));
                }
            
            }
        
        }
        // printing the shortest path
    for(int i =0;i<d.size();i++){
        cout<<i<<" "<<d[i]<<endl;
    }
}
int main (){
    int n =4;
    g=vector<vector<PII>>(n+1);
        //    b=VI(n+1);
    d=VI(n+1,INT_MAX);
    addedge(0,1,1);
    addedge(0,3,2);
    addedge(3,2,1);
    addedge(1,2,1);
    dij(0);
    
    
    
    
    
    
}
