#include <bits/stdc++.h>
using namespace std;
 
int main() {
 　//３桁の整数A,Bを定義して入力
  int A, B;
  cin >> A >> B;

　　//各桁の和sumAとsumBを定義して初期化、各桁の数字digAとdigBそれぞれ定義
  int sumA = 0;
  int digA;

  int sumB = 0;
  int digB;

  for (int i = 0; i < 3; i++) {
    digA = A % 10;//A = 123としたら一の位３をdigAに代入、A = 12としたら十の位２をdigAに代入、A = 1としたら百の位１をdigAに代入
    sumA += digA;//一の位の３をsumAに足す、十の位２をsumAに足す、十の位２をsumAに足す、百の位１をsumAに足す
    A = A / 10;//A = 123としたら一の位を除いた１２をAに代入、A = 12としたら十の位も除いた１をAに代入

    digB = B % 10;//Aと同じようにする
    sumB += digB;
    B = B / 10;
  }
  //S(A)とS(B)が同じ場合S(A)を出力
  if (sumA == sumB) {
    cout << sumA << endl;
  }
　　//S(A)とS(B)の内大きい方を出力
  else {
    cout << max(sumA, sumB) << endl;
  }
}
