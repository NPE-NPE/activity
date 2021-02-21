#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin >> N;
  
  vector<unsigned long long> A(N);
  vector<unsigned long long> B(N);
  
  for(int i = 0; i < N; i++) cin >> A.at(i) >> B.at(i);
  
  unsigned long long sum = 0;
  for(int i = 0; i < N; i++) {
    //(B.at(i) - A.at(i) + 1) * (A.at(i) + B.at(i)) / 2;
    //だと出力の値が滅茶苦茶になるので変数を新たに定義してそれぞれ代入
    unsigned long long c = A.at(i);
    unsigned long long d = B.at(i);
    //初項c, 公差1, 末項d, 項数n = d - c + 1の等差数列の和の公式 n * (c + d) / 2を利用
    //これにより計算回数が足し算、掛け算、割り算の計３回で済むのでTLEを起こさない
    sum += (d - c + 1) * (A.at(i) + B.at(i)) / 2;
  }
  
  cout << sum << endl;
}
