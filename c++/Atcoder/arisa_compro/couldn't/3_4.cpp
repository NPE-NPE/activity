#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int A, B, C, X;
  cin >> A >> B >> C >> X;


//自分のコード①
#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int A, B, C, X;
  cin >> A >> B >> C >> X;
  
  //３種類のコインそれぞれの組み合わせを考えるなら多重ループ！と思ってた
  vector<int> a(A, 500);
  vector<int> b(B, 100);
  vector<int> c(C, 50);
  
  for (int i = 0; i < A; i++) {
    cin >> a.at(i);
  }
 
  for (int j = 0; j < B; j++) {
    cin >> b.at(j);
  }
  
  for (int k = 0; k < C; k++) {
    cin >> c.at(k);
  }
  
  int count = 0;
  for (int i = 0; i < A; i++) {
    for (int j = 0; j < B; j++) {
      for (int k = 0; k < C; k++) {
        if (a.at(i) + b.at(j) + c.at(k) % X){
          count++;
        }
        else if (a.at(i) + b.at(j) == X){
          count++;
        }
        else if (a.at(i) + c.at(k) == X){
          count++;
        }
        else if (a.at(i) == X){
          count++;
        }
        else if (b.at(j) + c.at(k) == X){
          count++;
        }
        else if (b.at(j) == X){
          count++;
        }
        else if (c.at(k) == X){
          count++;
        }
      }
    }
  }
  //多重ループだと５００円２枚、１００円３枚など同じ種類の硬化２枚以上に対応できないので正しくない
  cout << count << endl;
  
}

//自分のコード②
#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C, X;
  cin >> A >> B >> C >> X;
  
  A *= 500;
  B *= 100;
  C *= 50;
  
  int count = 0;
  //if文にif文のネストを繰り返せばいけるのでは・・・？
  if (X % A == 0) {
    count++;
    if (X % (A + B) == 0) {
      count++;
      if (X % ())//ネスト元のif文の条件が当てはまらなければネストのif文が正しくても実行されないことに気づく
  
  cout << count << endl;
  
}
