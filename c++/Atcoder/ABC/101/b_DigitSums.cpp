#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
  int N;
  cin >> N;
  //Nの各位の和を計算できるように、もともとのNの値を予めnに代入しておく
  int n = N;

  int sum = 0;
  int dig; 

  while (N) {//for (int i = 0; i < N; i++)にすると（正しい数）-1の値になる
    dig = N % 10;
    sum += dig;
    N = N / 10;//この計算をN回繰り返すとN ≒　0となってしまう
  }

  //ここでNを用いると0 % sum == 0となってしまい全て"Yes"と出力される
  if (n % sum == 0) {
    cout << "Yes" << endl;
  }

  else {
    cout << "No" << endl;
  }
}
