#include <bits/stdc++.h> // Include every standard library
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



int main() {
  int N, a, b;
  scanf("%d",&N); 
  while(N--){
    scanf("%d %d\n",&a,&b);
    if(a>b)
        printf("%c\n", '>');
    if(a==b)
        printf("%c\n", '=');
    if(a<b)
        printf("%c\n", '<');
  }

  return 0;
}

