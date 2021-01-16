#include <bits/stdc++.h>
using namespace std;
 
int main() {
  //面倒くさいので最初から文字列として入力
  string N;
  cin >> N;
  
  //if文の条件式を(N[0] == N[1] == N[2])だとNoが出力される
  if (N[0] == N[1] && N[1] == N[2] || N[1] == N[2] && N[2] == N[3]) {
    cout << "Yes" << endl;
  }
  
  else {
    cout << "No" << endl;
  }
}
