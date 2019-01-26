#include <bits/stdc++.h> 
using namespace std;

//#define USEDEBUG

#ifdef  USEDEBUG
#define debug(x)    cerr << "#val(" << #x << ")=" << x << endl
#else
#define debug(x)
#endif

#ifdef USEDEBUG
#define DEBUG_TEST 1
#else   
#define DEBUG_TEST 0
#endif

#define debug_print(fmt, ...) \
    do { if (DEBUG_TEST) fprintf(stderr, "%s:%d:%s(): " fmt, __FILE__, \
         __LINE__, __func__, __VA_ARGS__ ); } while (0)


#define debug(x) \
    do { if (DEBUG_TEST) cerr << __FILE__ << __LINE__ << __func__ << "#val(" << #x << ")=" << x << endl; } while (0)


typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<string, string> pss;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef vector<pii> vii;
typedef vector<pll> vll;

double      EPS = 1e-9;
int         INF = 1000000005;
long long   IINF = 1000000000000000005LL;
double      PI = acos(-1);

#define FOR(a, b, c)        for (int(a) = (b); (a) < (c); ++(a))
#define FORN(a, b, c)       for (int(a) = (b); (a) <= (c); ++(a))
#define FORR(a, b, c)       for (int(a) = (b); (a) >= (c); --(a))
#define FORS(a, b, c, d)    for (int(a) = (b); (a) < (c); (a)+=(d))
#define FORNS(a, b, c, d)   for (int(a) = (b); (a) <= (c); (a)+=(d))
#define FORRS(a, b, c, d)   for (int(a) = (b); (a) >= (c); (a)-=(d))

#define FFOR(a, b, c)       for (ll(a) = (b); (a) < (c); ++(a))
#define FFORN(a, b, c)      for (ll(a) = (b); (a) <= (c); ++(a))
#define FFORR(a, b, c)      for (ll(a) = (b); (a) >= (c); --(a))
#define FFORS(a, b, c, d)   for (int(a) = (b); (a) < (c); (a)+=(d))
#define FFORNS(a, b, c, d)  for (int(a) = (b); (a) <= (c); (a)+=(d))
#define FFORRS(a, b, c, d)  for (int(a) = (b); (a) >= (c); (a)-=(d))

#define FORC(a, b, c)       for (char(a) = (b); (a) <= (c); ++(a))
#define FOREACH(a, b)       for (auto &(a) : (b))
#define REP(i, n)           FOR(i, 0, n)
#define REPN(i, n)          FORN(i, 1, n)
#define RREP(i, n)          FFOR(i, 0, n)
#define RREPN(i, n)         FFORN(i, 1, n)

#define MAX(a, b)           a = max(a, b)
#define MIN(a, b)           a = min(a, b)
#define SQR(x)              ((LL)(x) * (x))
#define RESET(a, b)         memset(a, b, sizeof(a))
#define fi                  first
#define se                  second
#define mp                  make_pair
#define pb                  push_back

#define ALL(v)              v.begin(), v.end()
#define ALLA(arr, sz)       arr, arr + sz
#define SIZE(v)             (int)v.size()
#define SORT(v)             sort(ALL(v))
#define REVERSE(v)          reverse(ALL(v))
#define SORTA(arr, sz)      sort(ALLA(arr, sz))
#define REVERSEA(arr, sz)   reverse(ALLA(arr, sz))
#define PERMUTE             next_permutation
#define TC(t)               while (t--)

#define sci(x) scanf("%d",&x)
#define scl(x) scanf("%lld",&x)
#define scd(x) scanf("%lf",&x)
#define scs(x) scanf("%s",x)

#define pfi(x) printf("%d",x)
#define pfs(x) printf("%s",s)
#define pfl(x) printf("%lld",x)
#define pfd(x) printf("%lf",x)


int main()
{
    
    int n_req, n_prop, tc = 1;
    while( (scanf("%d %d",&n_req, &n_prop),n_req != 0) ){
        
        vector<string> vec_reqs;
        string passed;
        int n_passed_max = -1;
        int price_min =INF; 
        string tem;
        getline(cin, tem);
        while(n_req--){
            getline(cin,tem);
            vec_reqs.push_back(tem);
            debug(tem);
        }
        
        while(n_prop--){
            string name;
            double price; int n_items;
            int n_passed = 0;
            getline(cin,name);
            cin >> price >> n_items;
            getline(cin, tem);
            
            while(n_items--){
                string an_item;
                getline(cin,an_item);
                if(find(vec_reqs.begin(),vec_reqs.end(),an_item) != vec_reqs.end())
                {
                    n_passed++;
                }
            }
            if(n_passed > n_passed_max || (n_passed == n_passed_max && price < price_min) ){
                passed = name;
                n_passed_max = n_passed;
                price_min = price;
            }
        }
        cout << "REP #" << tc++ << "\n" << passed << "\n\n";
    }

    return 0;
}