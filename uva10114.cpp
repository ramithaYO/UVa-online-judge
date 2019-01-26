#include <bits/stdc++.h> 
using namespace std;

#define USEDEBUG

#ifdef 	USEDEBUG
#define debug(x)	cerr << "#val(" << #x << ")=" << x << endl
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



int main() {
	int x = 9; int y = 0;
	debug_print("%d %d\n", x, y);
	return 0;  
}


// float d_pay, loan;
//   int months, dep_recs;
//   while((scanf("%d %f %f %d", &months, &d_pay, &loan, &dep_recs)), months > 0){
// 	float rates[101];
// 	int n = 0;
// 	float current_val = loan + d_pay;
// 	while(dep_recs--){
// 		int m = 0; float rate; 
// 		scanf("%d %f", &m, &rate);
		

// 		FOR(i,m,months){
// 			rates[i] = rate;
			
// 		}
// 	}

// 	float diff = loan / months;
// 	FOR(i,0,months){
// 			loan -= diff;
// 			VAL(current_val);
// 			if(current_val < loan){
// 				n = i;
// 				break;
// 			}
// 			current_val *= (1 - rates[i]);
// 	}
// 	if( n == 1 ){
// 		printf("%d month\n", n);
// 	}else{
// 		printf("%d months\n", n);
// 	}
//   }

