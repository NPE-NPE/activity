#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  
  cin >> N;
  vector<int> a(N);
  for (int i = 0; i < N; i++) cin >> a.at(i);
  sort(a.begin(), a.end()); 
  reverse(a.begin(), a.end()); 
  
  int Alice = 0;
  //Aliceにa(N)の要素数が偶数のものを足し合わせる
  for (int i = 0; i < N; i += 2) Alice += a.at(i);
  
  int Bob = 0;
  //Bobにa(N)の要素数が奇数のものを足し合わせる
  for (int i = 1; i < N; i += 2) Bob += a.at(i);
  
  cout << Alice - Bob << endl;

}
