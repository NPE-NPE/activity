#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N, M, T;
  cin >> N >> M >> T;
  
  vector<int> A(M);
  vector<int> B(M);
  
  for (int i = 0; i < M; i++) cin >> A.at(i) >> B.at(i); 
  //Nの初期値を保存しておく
  int n = N;
  //B.at(i)を保存しておくための変数を定義
  int c = 0;
  for (int i = 0; i < M; i++) {
   //1回目のときだけNからA.at(i = 0)の値を引く   
   if (i == 0) {
          //時刻１からいきなりカフェに入ってもバッテリーは満タンなので充電されない
          if (A.at(i) == 1) continue;
          else N -= A.at(i);
          if (N <= 0) break;
      }
      //2回目以降はA.at(i)の値からB.at(i - 1)の差をNにデクリメント①
      else {
          N -= A.at(i) - c;
          if (N <= 0) break;
      }
      //充電がNの初期値以下（減っている）ならカフェに居る時間充電する
      if (N < n) N += B.at(i) - A.at(i);
      //満タン以上なら充電しない
      else if (N >= n) continue;
      //①の操作ができるように代入しておく
      c = B.at(i);
  }
  
  //最後に
  N -= T - c;
    
  if (N > 0) cout << "Yes" << endl;
  else cout << "No" << endl;
    
}
