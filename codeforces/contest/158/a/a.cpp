/*
 * Author: Monu Carpenter
 * Time: 2024-07-12 22:48:57
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
   int n, k; cin >> n >> k; 

   vector<int> x(n); 

   for(int i=0; i<n; i++) {
       cin >> x[i]; 
   } 

   int target = x[k - 1]; 

   // trying with the sum 
   int sum  = 0; 
   for(int i=0 ; i<n; i++)  
     sum += x[i]; 

   if(sum == 0) {
     cout << "0" << endl; 
     return; 
   }

   // 
   int result = 0; 
   for(int i=0; i<n; i++) 
      if(x[i] >= target) 
       result++;

   cout << result << endl; 
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
    return 0;
}
