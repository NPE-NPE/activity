#include <bits/stdc++.h>
using namespace std;
 
int main() {
  //お店がN軒
  int N;
  cin >> N;

  //現在地から徒歩A,価格P、在庫X
  vector<int> A(N);
  vector<int> P(N);
  vector<int> X(N);
  
  for (int i = 0; i < N; i++) cin >> A.at(i) >> P.at(i) >> X.at(i);

  int k = 0;
  for (int i = 0; i < N; i++) {
    //１回目（初期の状態）の場合はｋにPの値代入
    if (X.at(i) - A.at(i) > 0 && k == 0) k = P.at(i);
    //２回目以降はPの値がkより小さかったら代入
    else if (X.at(i) - A.at(i) > 0 && k > P.at(i)) k = P.at(i);
  }
  if (k == 0) cout << "-1" << endl;
  else cout << k << endl;
}
