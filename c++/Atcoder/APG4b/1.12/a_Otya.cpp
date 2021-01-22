#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string S;
  cin >> S;

  reverse(S.begin(), S.end());
  
  //""内の文字が全部大文字じゃないと間違いなので注意
  //'T'でなく"T"だとエラー吐く
  if (S[0] == 'T') cout << "YES" << endl;
  else cout << "NO" << endl;
  
} 
