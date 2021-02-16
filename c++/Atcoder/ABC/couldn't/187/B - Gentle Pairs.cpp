#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N, k;
  cin >> N;
  
  vector<int> x(N);
  vector<int> y(N);
  
  for (int i = 0; i < N; i++) cin >> x.at(i) >> y.at(i);
  
  int count = 0;
  for (int i = 0; i < N; i++) {
    k = y.at(i + 1) - y.at(i) / x.at(i + 1) - x.at(i);
    if (-1 <= k <= 1) count++;
  }
  
  cout << count << endl;
  
}
