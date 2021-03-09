#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin >> N;
  
  vector<pair<string, int>> p(N);
  for (int i = 0; i < N; i++) {
    string S;
    int P;
    cin >> S >> P;
    p.at(i) = make_pair(S, P);  // b, a の順でペアにする
  }

  sort(p.begin(), p.end());

  for (int i = 0; i < N; i++) {
    cout << p.at(i) << endl;
  }
}
