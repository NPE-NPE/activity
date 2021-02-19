#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
 
int main() {
  int N, M, T;
  cin >> N >> M >> T;
  
  vector<int> A(M);
  vector<int> B(M);
  
  for (int i = 0; i < M; i++) cin >> A.at(i) >> B.at(i); 
  
  int n = 0;
  int t = 0;
  while(T--) {
    t += 0.5;
    if (1 <= t / 0.5) N--;
    
    for (int i = 0; i < M; i++) {
      if (t == A.at(i)) N += B.at(i) - A.at(i);
    }
    n++;
  }
  
  cout << N << endl;
  /*
  if (N == 0) cout << "No" << endl;
  else cout << "Yes" << endl;
  */
}
