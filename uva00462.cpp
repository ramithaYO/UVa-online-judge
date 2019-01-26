#include <bits/stdc++.h> 
using namespace std;

#define USEDEBUG

#ifdef USEDEBUG
#define DEBUG_TEST 1
#else   
#define DEBUG_TEST 0
#endif

#define debug_print(fmt, ...) \
    do { if (DEBUG_TEST) fprintf(stderr, "%s:%d:%s(): " fmt, __FILE__, \
         __LINE__, __func__, __VA_ARGS__ ); } while (0)


#define debug(x) \
    do { if (DEBUG_TEST) cerr << "#" << __FILE__  << ":" \
        << __LINE__ << ":" << __func__ << ":" << #x << ": " << x << endl; } while (0)


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
#define FIND(v, item)       (find(ALL(v), item) != v.end())
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

int suit_num(char c){
    if (c == 'C') return 0;
    if (c == 'D') return 1;
    if (c == 'H') return 2;
    if (c == 'S') return 3;
}

int main()
{
    string line;
    while(getline(cin,line)){
        istringstream iss(line);
        string card;
        vector<char> v_suits[4];
        bool is_stopped_all = 1;
        int sum = 0;
        int sum_no_trump;

        while(iss >> card)
            v_suits[suit_num(card[1])].push_back(card[0]);

        REP(i,4){
            FOREACH(c,v_suits[i]){
                if(c == 'A') sum+=4;
                else if(c == 'K') sum+=3;
                else if(c == 'Q') sum+=2;
                else if(c == 'J') sum+=1;
            }
            if((v_suits[i].size() == 1) && (v_suits[i][0] == 'K'))
                sum--;
            if((v_suits[i].size() <= 2) && (FIND(v_suits[i],'Q')))
                sum--;
            if((v_suits[i].size() <= 3) && (FIND(v_suits[i],'J')))
                sum--;

            sum_no_trump = sum;

            if((v_suits[i].size() == 2))
                sum++;
            if((v_suits[i].size() == 1) || (v_suits[i].size() == 0))
                sum+=2;

            if(!( 
                (FIND(v_suits[i],'A')) || 
                ( (FIND(v_suits[i],'K')) && (v_suits[i].size() >= 2) ) ||
                ( (FIND(v_suits[i],'Q')) && (v_suits[i].size() >= 3) )
            ))
                is_stopped_all = 0;
        }

        if(sum_no_trump >= 16 && is_stopped_all)
            cout << "BID NO-TRUMP" << endl;
        else if(sum < 14)
            cout << "PASS" << endl;
        else{
            int bid_suit;
            char c_suit;
            int size = 0;
            REP(i,4){
                if(v_suits[i].size() >= size){
                    size = v_suits[i].size(); bid_suit = i;
                }
            }
            if(bid_suit == 0) c_suit = 'C';
            else if(bid_suit == 1) c_suit = 'D';
            else if(bid_suit == 2) c_suit = 'H';
            else  c_suit = 'S';

            cout << "BID " << c_suit << endl;
        }

    }
    return 0;
}

