#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int t;
  cin >> t;

  vector<int> n(t);
  vector<int> a(n);

  while (t = 0) {
    for (int i = 0; i < t;) cin >> n.at(i);
    for (int i = 0; i < n; i++) cin >> a.at(i);
    t--;
    for (int i = 0; i < t;) i++;

  }

  


  

  

  sort(a.begin(), a.end());
  reverse(a.begin(), a.end());

  a.pop_back();

  for (int i = 0; i < n; i++) cout << a.size() << endl;

