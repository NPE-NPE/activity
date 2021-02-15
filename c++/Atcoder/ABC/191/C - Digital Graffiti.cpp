#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int H, W;
  cin >> H >> H;

  vector<vector<char>> S(H, vector<char>(W));

  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      cin >> S.at(i).at(j);
    }
  }
}
