#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int A, B, C;
  cin >> A >> B >> C;
  
  for (int i = 0; i < 100; i++) {
    if (C == 0) {
      A -= 1;
      //アメが０個になった時点ではなく０個の状態からアメを食べようとした時に負ける
      //（アメが０未満）
      if (A < 0) {
        break;
      }
      B -= 1;
      if (B < 0) {
        break;
      }
    }

    else {
      B -= 1;
      if (B < 0) {
        break;
      }
      A -= 1;
      if (A < 0) {
        break;
      }
    }
  }

  if (B < 0) cout << "Takahashi" << endl;
  else cout << "Aoki" << endl;
}
