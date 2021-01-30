#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int H, W;//縦H、横W
  cin >> H >> W;
 
  vector<vector<char>> a(H, vector<char>(W));
  
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      cin >> a.at(i).at(j);
    }
  }
  
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      if (a.at(i).at(j) == '.' ) {
        a.erase(a.begin(), a.end());
      }
    }
  }
  
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      cout << a.at(i).at(j);
      if (j == W - 1) {
        cout << endl;  // 行末なら改行
      }
      else {
        cout << " ";  // 行末でないなら空白を出力
      }
    }
  }
}
