#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  
  //初見コード
  if (S == "yahaa" || S == "yahbb" || S == "yahcc" || S == "yahdd"
      || S == "yahee" || S == "yahff" || S == "yahgg" || S == "yahhh"
      || S == "yahii" || S == "yahjj" || S == "yahkk" || S == "yahll"
      || S == "yahmm" || S == "yahnn" || S == "yahoo" || S == "yahpp"
      || S == "yahqq" || S == "yahrr" || S == "yahss" || S == "yahtt"
      || S == "yahuu" || S == "yahvv" || S == "yahww" || S == "yahxx"
      || S == "yahyy" || S == "yahzz") {
    cout << "YES" << endl;
  }
  //解答コード
  //if(S.substr(0, 3) == "yah" && S[3] == S[4])
  else {
    cout << "NO" << endl;
  }
}
