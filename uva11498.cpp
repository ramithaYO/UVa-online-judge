#include <bits/stdc++.h> // Include every standard library
using namespace std;


int main() {
  int TC;
  int cx, cy, x, y;

  while(scanf("%d %d %d", &TC, &cx, &cy), TC != 0)
    while(TC--){
      scanf("%d %d", &x, &y);
      string output = "";
      if(y==cy || x==cx)
        output = "divisa";
      else{
        output += (y > cy) ? "N" : "S";
        output += (x > cx) ? "E" : "O";
      }
      cout << output << endl;
    }

  return 0;
}

