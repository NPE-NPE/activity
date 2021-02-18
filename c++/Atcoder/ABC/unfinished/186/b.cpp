#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
 
int main() {
  int H, W;
  cin >> H >> W;
  
  vector<vector<int>> A(H, vector<int>(W));
 
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) cin >> A.at(i).at(j);
  }
  
  int a = 0;
  int b = 0;
  int counta = 0;
  int countb = 0;
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      if(A.at(i).at(j) == A.at(0).at(0)) {
        a = A.at(i).at(j);
        counta++;
      }
      else if (A.at(i).at(j) != A.at(0).at(0)) {
        b = A.at(i).at(j);
        countb++;
      }
    }
  }
  if (counta == 0 || countb == 0) cout << 0 << endl;
  else if (a > b) cout << counta * (a - b)  << endl;
  else cout << countb * (b - a) << endl; 
}
