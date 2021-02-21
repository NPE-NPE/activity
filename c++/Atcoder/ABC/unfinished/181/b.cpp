#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin >> N;
  
  vector<unsigned long long> A(N);
  vector<unsigned long long> B(N);
  
  for(int i = 0; i < N; i++) cin >> A.at(i) >> B.at(i);
  
  unsigned long long sum = 0;
  for(int i = 0; i < N; i++) {
    unsigned long long c = A.at(i);
    unsigned long long d = B.at(i);
    while((d - c) + 1) {
      sum += c;
      c++;
    }
  }
  
  cout << sum << endl;
}
