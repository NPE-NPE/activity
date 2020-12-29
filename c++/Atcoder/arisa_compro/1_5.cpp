#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> vec(N);
  
  //方法１
  for (int i = 0; i < N; i++) {
    cin >> vec.at(i);
  }
  
  int sum = accumulate(vec.begin(), vec.end(), 0);
  
  //方法２
  int sum = 0;
  for(int i=0; i<N; i++){
　// sum に a[i] を 足 す
　// sum = sum + a[i] と 同 じ 意 味
  sum += a[i];
  }
  cout << sum << endl;
}
