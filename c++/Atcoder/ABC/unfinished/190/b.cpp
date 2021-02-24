//コード１
#include <bits/stdc++.h>
using namespace std;
 
int main() {
  //N杯飲んで、アルコール摂取量がX超えると酔っ払う
  int N, X;
  cin >> N >> X;

  //i番目に飲んだお酒は量がVi[ml],アルコール度数がPi[%]
  vector<int> V(N);
  vector<int> P(N);

  for (int i = 0; i < N; i++) cin >> V.at(i) >> P.at(i);

  int count = 0;
  int sum = 0;
  for (int i = 0; i < N; i++) {
    sum += V.at(i) * P.at(i) / 100;
    if (sum > X) {
      count++;
      break;
    }
    else count++;
  }
  
  if (sum < X) cout << -1 << endl;
  else cout << count << endl;

} 

//コード２
#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N, X;
  cin >> N >> X;

  vector<int> V(N);
  vector<int> P(N);

  for (int i = 0; i < N; i++) cin >> V.at(i) >> P.at(i);

  int count = 0;
  for (int i = 0; i < N; i++) {
    
    if (X - (V.at(i) * P.at(i) / 100) >= 0) {
      count++;
      X -= (V.at(i) * P.at(i) / 100);
    }
    else if (X - (V.at(i) * P.at(i) / 100) < 0) {
      count++;
      X -= (V.at(i) * P.at(i) / 100);
      break;
    }
  }

  if (X > 0) cout << -1 << endl;
  else cout << count << endl;
} 
