#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N, K;
  cin >> N >> K;
  
  vector<int> l(N);
 
  for (int i = 0; i < N; i++) {
    cin >> l.at(i);
  }
  
  sort(l.begin(), l.end());
  
  //N本からK本の棒を選ぶということは残りの（N - K）本は選ばないので消す
  //５本の内３本選ぶなら5-3 = 2本を取り除く
  //l.erase(l.begin()(どこからか削除し始めるか添字指定)l.begin() + (N - K)(何本削除したいか指定（0 + 本数）))
  l.erase(l.begin(), l.begin() + (N - K));
  
  int sum = accumulate(l.begin(), l.end(), 0);
  cout << sum << endl;
}
