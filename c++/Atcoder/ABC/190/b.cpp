#include <bits/stdc++.h>
using namespace std;
 
int main() {
  //S秒以上かかる、威力D以下は無効
  int N, S, D;
  cin >> N >> S >> D;

  vector<int> X(N);
  vector<int> Y(N);

  //Xi秒かかり、威力はYi
  for (int i = 0; i < N; i++) cin >> X.at(i) >> Y.at(i);

  //一組だけでも条件に当てはまれば良いのでbool型用いて当てはまったらbreakで抜ける
  bool a = false;
  for (int i = 0; i < N; i++) {
    if (X.at(i) < S && Y.at(i) > D) {
      a = true;
      break;
    }
  }
  
  if (a == true) cout << "Yes" << endl;
  else cout << "No" << endl;
}
