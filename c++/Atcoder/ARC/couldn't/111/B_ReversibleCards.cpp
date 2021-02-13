#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  
  vector<int> a(N);
  vector<int> b(N);
  
  for (int i = 0; i < N; i++) cin >> a.at(i) >> b.at(i);
  
  a.insert(a.end(), b.begin(), b.end()); // 連結

  sort(a.begin(), a.end());
  a.erase(unique(a.begin(), a.end()), a.end()); 
  
  cout << a.size() << endl;
  
}
