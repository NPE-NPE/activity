#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A, B;
  cin >>  N >> A >> B; 

  //P1 = A * N;
  //P2 = B;

  if (A * N > B) { 
    cout << B << endl;
  }
  else if (A * N < B) {
    cout << A * N << endl;
  }
  else {
    cout << A * N  << endl;
  }
}
