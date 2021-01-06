//本書のコード
#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
  string A,B,C;

  cin >> A >> B >> C;

  if (A[A.size()-1] == B[0] && B[B.size()-1] == C[0]) {
    cout << "Yes" << endl;
  }

  else {
    cout << "No" << endl;
  }
}

//答えは合ってるけどなぜか通らなかった
#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
  string A,B,C;

  cin >> A >> B >> C;

  reverse(A.begin(), A.end()); 

  string resultA = A.substr(0, 1);
  string resultB1 = B.substr(0, 1);
  
  reverse(B.begin(), B.end());

  string resultB2 = B.substr(0, 1);
  string resultC = C.substr(0, 1);

  if (resultA == resultB1 && resultB2 == resultC) {
    cout << "Yes" << endl;
  }

  else {
    cout << "No" << endl;
  }
}
