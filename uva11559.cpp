#include <bits/stdc++.h> 
using namespace std;

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

double EPS = 1e-9;
int INF = 1000000005;
long long IINF = 1000000000000000005LL;
double PI = acos(-1);

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

#define VAL(x)              cerr << "#val(" << #x << ")=" << x << endl
#define VALL(x,y)           cerr << "#val(" << #x << "," << #y << ")=" << x  << "," << y << endl
#define VALLL(x,y,z)        cerr << "#val(" << #x << "," << #y << "," << #z << ")=" << x  << "," << y << "," << z << endl

int main() {
float d = 1.234567890;
  for (int i = 0; i < 100; i++)
  {
  	float t = pow(10,i);
  	float x = d * t;
  	VAL(x);
  }
}




