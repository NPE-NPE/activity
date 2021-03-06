#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N;
  cin >> N;
  
  int count = 0;
  while(N -= 100) {
    if (N < 0) break;
    else if (N % 100 == 0) {
      count++;
    }
  }
  cout << count << endl;
}
