#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N, K;
  cin >> N >> K;
  
  //表示されている整数１を定義
  int a = 1;
  for (int i = 0; i < N; i++) {
    //a += K > a *= 2とすると
    //lvalue required as left operand of assignment
    //とエラー吐く
    if (a + K > a * 2) {
      a *= 2;
    }
    
    else {
      a += K;
    }
  }
  
  cout << a << endl;
}
