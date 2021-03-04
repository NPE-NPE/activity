//本書のコード
#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin >> N;
  
  vector<int> A(N);//A[N]にするとcin >> A[i];でエラー吐く
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }
  
  int ans = 0;
  
  bool div_by_2 = true;
  
  while(div_by_2){
    
    //配列の各要素ごとの処理を一度行う
    for(int i=0; i<N; i++){
     //奇数の場合（奇数になった時点で終了） 
     if(A[i] % 2 == 1){
        div_by_2 = false;
        break;
      }
     //偶数の場合
     else {
        A[i] /= 2;
        //直後にans++;を書くと配列の各要素ごとの処理（A[i] % 2）をするたびにansがインクリメントされてしまう
        //OneNote参照
      }
    }//一旦終了
    
    //配列の各要素ごとの処理を一度行ったらそれを操作としてカウント
    if(div_by_2){
      ans++;
    }
    //配列の各要素（書かれている整数）がまだ全て偶数ならもう一度配列の各要素ごとの処理（for文）が行われる
  }
  cout << ans << endl;
} 

//自分のコード
#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
  int N;
  cin >> N;
  
  vector<int> A(N); 
  
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }
    
  int count = 0;
  
  //このやり方だと入力例３のような(割れる回数) > (入力回数N)に対応できない
  for (int i = 0; i < N; i++) { 
    A.at(i) = A.at(i) / 2;
    count++;
  }
  
  //52行からのfor文のような書き方以外にfor文にif文をネストして場合分けすると実行される（２で割る）回数は１回だけになってしまう
  //8 12 40 の場合は4 8 20 となる
  
  for (int i = 0; i < N; i++) {
    cout << A.at(i) << endl;
  }
}
