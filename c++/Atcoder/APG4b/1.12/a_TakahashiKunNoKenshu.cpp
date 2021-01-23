#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string A, B;
  cin >> A >> B;
  
  size_t a = A.length();
  size_t b = B.length();
  
  if (a > b) cout << A << endl;
  else cout << B << endl;
}
