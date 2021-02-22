#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string S;
  cin >> S;
  
  bool a;
  bool b;
  //先頭から偶数番目（添字iから奇数番目）
  for (int i = 1; i < S.size(); i += 2) {
    if (isupper(S[i])) a = true;
    else {
      a = false;
      break;
    }
  }
  //先頭から奇数番目(添字iから偶数番目)
  for (int i = 0; i < S.size(); i += 2) {
    if (islower(S[i])) b = true;
    else {
      b = false;
      break;
    }
  }
  if (a == true & b == true) cout << "Yes" << endl;
  else cout << "No" << endl;
}
