//正解コード

#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<pair<int, int>> p(N);
  for (int i = 0; i < N; i++) {
    int a, b;
    cin >> a >> b;
    p.at(i) = make_pair(b, a);  // b, a の順でペアにする
  }

  sort(p.begin(), p.end());

  for (int i = 0; i < N; i++) {
    int b, a;
    tie(b, a) = p.at(i);  // b, a の順であることに注意
    cout << a << " " << b << endl;
  }
}

//自分のコード
#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin >> N;
  
  vector<int> a(N);
  vector<int> b(N);
  
  for(int i = 0; i < N; i++) cin >> a.at(i) >> b.at(i);
  
  pair<int, int> p();
  
  sort(b.begin(), b.end());
  
  cout << p.first << " " << p.second << endl;
  
}
