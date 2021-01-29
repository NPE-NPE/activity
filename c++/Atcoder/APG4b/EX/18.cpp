#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N, M;//人数はN、試合はM
  cin >> N >> M;
  vector<int> A(M), B(M);//Aは試合で勝った人、Bは試合で負けた人
  for (int i = 0; i < M; i++) {
    cin >> A.at(i) >> B.at(i);
  }
 
  // ここにプログラムを追記
  // ここで"試合結果の表"の2次元配列を宣言（N×Nのchar型の2次元配列のすべての要素を'-'で初期化）
  vector<vector<char>> table(N, vector<char>(N, '-'));
  
  for (int i = 0; i < M; i++) {
    // 1〜N → 0〜N-1 に変換するためにデクリメント(表のマスの数え方を１からではなく０からにするため) 
    A.at(i)--; B.at(i)--;
    //配列Aと配列Bの添字は一緒に更新される訳ではない（A.at(i = 0)のとき、B.at(i = 0,1,2...)のそれぞれが終わったら
    //A.at(i = 1)のとき、B.at(i = 0,1,2...)と変化する）
    table.at(A.at(i)).at(B.at(i)) = 'o';  // i試合目でAはBに勝った（i番目の1次元配列 のi番目の要素、入出力例参照）
    table.at(B.at(i)).at(A.at(i)) = 'x';  // i試合目でBはAに負けた
  }
  
  //行末に空白を含めない出力の仕方
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cout << table.at(i).at(j);
      if (j == N - 1) {
        cout << endl;  // 行末なら改行
      }
      else {
        cout << " ";  // 行末でないなら空白を出力
      }
    }
  }
}
