#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N, K;
  cin >> N >> K;
  
  string str = to_string(N);
  
  for (int i = 0; i < K; i++) {
    //各桁の数字大きい順
    string a = sort(str.begin(), str.end());
    //各桁の数字大きい順
    string b = reverse(str.begin(), str.end());
    int A = stoi(a);
    int B = stoi(b);
    int C = B - A;
    str = to_string(C);
  }
  cout << str << endl;
}
