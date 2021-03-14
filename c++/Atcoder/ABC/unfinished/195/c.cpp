#include <bits/stdc++.h>
using namespace std;
 
int main() {
  
  //10^15 = 1,000,000,000,000,000(16桁)
  int64_t N;
  cin >> N;

  string n = to_string(N);

   
  if(n.size() <= 6) cout << N - 999 << endl;
  else if (6 < n.size() <= 9) cout << 999000 + (N - 999999) * 2 << endl;
  else if (9 < n.size() <= 12) cout << 999000 + 1000000 * 2 + (N - 999999999) * 3 << endl;
  else if (12 < n.size() <= 15) cout << 999000 + 1000000 * 2 + 999999999 * 3 + (N - 999999999999) * 4 << endl;
  else cout << 999000 + 999999 * 2 + 999999999 * 3 + 999999999999 * 4  + (N - 999999999999) * 5 << endl; 

  
  
}
