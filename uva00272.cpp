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
  ifstream cin("input.txt");
  char c;
  bool started  = 0;
  while(scanf("%c",&c) != EOF){
    if(c == '\"'){
      if(started){
        printf("%s", "\'\'");
      }else{
        printf("%s", "``");
      }
      started = !started;
    }else{
      printf("%c", c);
    }
  }

  return 0;
}
