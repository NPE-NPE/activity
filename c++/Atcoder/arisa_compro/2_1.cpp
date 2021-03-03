#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string A, B, C;
  cin >> A >> B >> C;
  
  //Aの最後の文字を先頭にする
  reverse(A.begin(), A.end());
  
  bool ans1 = false;
  if (A[0] == B[0]) ans1 = true;
 
  //Bの最後の文字を先頭にする
  reverse(B.begin(), B.end());
  
  bool ans2 = false;
  if (B[0] == C[0]) ans2 = true;
  
  if (ans1 == true && ans2 == true) cout << "YES" << endl;
  else cout << "NO" << endl;
 
}
