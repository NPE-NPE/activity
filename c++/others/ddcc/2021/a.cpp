#include <bits/stdc++.h>
using namespace std;
 
int main() {
  
  vector<int> P1 = {10,0,9,1,8,1,7,3,6,2,5,5,4,5,2,8,2,3,1,8};
  vector<int> P2 = {5,5,4,4,3,7,6,4,7,3,9,1,5,2,1,1,0,0,9,0};
  vector<int> P3 = {0,10,1,9,10,0,10,0,2,8,0,10,1,9,9,0,1,8,2,2};
  
  int count1 = 0;
  for (int i = 0; i < P1.size(); i += 2) {
    if (P1.at(i) == 10 || P1.at(i + 1) == 10) continue;
    else if (P1.at(i) + P1.at(i + 1) == 10) count1++;
  }
  
  int count2 = 0;
  for (int i = 0; i < P2.size(); i += 2) {
    if (P2.at(i) == 10 || P2.at(i + 1) == 10) continue;
    else if (P2.at(i) + P2.at(i + 1) == 10) count2++;
  }
  
  int count3 = 0;
  for (int i = 0; i < P3.size(); i += 2) {
    if (P3.at(i) == 10 || P3.at(i + 1) == 10) continue;
    else if (P3.at(i) + P3.at(i + 1) == 10) count3++;
  }
  
  cout << "{" << count1 << "," << count2 << "," << count3 << "}" << endl;
}
