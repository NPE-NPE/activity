#include <bits/stdc++.h>
using namespace std;
 
int main() {
  
  //10^15 = 1,000,000,000,000,000(16桁)
  int64_t N;
  cin >> N;

  string n = to_string(N);
 
  //６桁以下 
  if(n.size() <= 6) cout << N - 999 << endl;
  //7桁から９桁
  else if (6 < n.size() <= 9) cout << 999000 + (N - 999999) * 2 << endl;
  //10桁から１２桁
  else if (9 < n.size() <= 12) cout << 999000 + (1000000000 - 999000) * 2 + (N - 999999999) * 3 << endl;
  //１３桁から１５桁
  else if (12 < n.size() <= 15) cout << 999000 + (1000000000 - 999000) * 2 + (100000000000 - 999999999) * 3 + (N - 999999999999) * 4 << endl;
  //１６桁
  else cout << 999000 + (1000000000 - 999000) * 2 + (100000000000 - 999999999) * 3 + (100000000000000 - 999999999999) * 4 + (N - 999999999999999) * 5 << endl; 

  
  
}
