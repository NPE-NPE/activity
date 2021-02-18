#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int T, N;
  cin >> T;

  

  while(T--){
		cin >> N;
    vector<int> a(N);
		for(int i = 0; i < N; i++) cin >> a.at(i);
    sort(a.begin(), a.end());
    int y = 0;
    int n = 0;
    for(int i = 0; i < N; i++) {
      
      
      if(a.at(i) == a.at(i) + 1) y++;
      else n++;
      

    }

    cout << y << n << endl;



  }

  /*
  #include<bits/stdc++.h>
using namespace std;
int T,n,a[103];
int main(){
	cin>>T;
	while(T--){
		cin>>n;
		for(int i=0;i<n;i++)cin>>a[i];
		sort(a,a+n);
		int ans=0;
		for(int i=1;i<n;i++)if(a[i]!=a[0])ans++;
		cout<<ans<<"\n";
	}
}
	}*/
}
