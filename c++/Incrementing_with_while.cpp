#include <iostream>

using namespace std;

int main(){
        int n;
        cout << "何個？：";
        cin >> n;

        if (n > 0){
                int i = 1;
                while(i < n){
                        cout << '*' ;
                        i++;
                }
                cout << endl;
        }
}
//about incrementhing
case1:
i = 1 < n = 3
+
i = 2 < n = 3
++
case2:
i = 1 <= n = 3
+
i = 2 <= n = 3
++
i = 3 <= n = 3
+++
case3:
i = 0 < n = 3
+
i = 1 < n = 3
++
i = 2 < n = 3
+++
case4:
i = 0 <= n = 3
+
i = 1 <= n = 3
++
i = 2 <= n = 3
+++
i = 3 <= n = 3
++++
