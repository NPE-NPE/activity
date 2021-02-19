#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
 
int main() {
  int N;
  cin >> N;
  
  vector<int> A(N);
  
  for (int i = 0; i < N; i++) cin >> A.at(i);
  
  int d = 2;
  int GCD = 0;//GCD度はN以下
  for (int i = 0; i < N; i++) {
    if (A.at(i) % d == 0) GCD++;
  }
  if (GCD == N) break;
  
  cout << d << endl
  
  
    
 
}
