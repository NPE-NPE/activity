#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N, K;
  cin >> N >> K;
  
  for (int i = 0; i < K; i++) {
    string str = to_string(N);
    string a = sort(str.begin(), str.end());
    string b = reverse(str.begin(), str.end());
    int A = stoi(a);
    int B = stoi(b);
    
    
    
  }
  
}
