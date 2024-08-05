/*
 * Author: Monu Carpenter
 * Time: 2024-07-20 20:35:42
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
  int n; cin >> n; 

  int result =  true; 
  int mx = 0;    

  int x; 
  while(n--) {
    cin >> x; 
    if(x >= mx) {
   	 mx = x; 
    } else {
     result = !result;   
    }
  }

  if(result) 
  cout << "YES"; 
  else 
  cout <<"NO"; 
  
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T; cin  >> T ; 

    while(T--) 
    solve();
    return 0;
}
