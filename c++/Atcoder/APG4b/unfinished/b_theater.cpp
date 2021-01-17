#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin >> N;
  
  vector<int> l(N); // N個の数学の点数データ
  vector<int> r(N); // N個の英語の点数データ
 
  // 数学の点数データを受け取る
  for (int i = 0; i < N; i++) {
    cin >> l.at(i);
  }
 
  // 英語の点数データを受け取る
  for (int i = 0; i < N; i++) {
    cin >> r.at(i);
  }
  
  for (int i = 0; i < N; i++) {
    cout << r.at(i) - l.at(i) + 1 << endl;
  }
}
