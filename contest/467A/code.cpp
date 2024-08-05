/*
 * Author: Monu Carpenter
 * Time: 2024-08-01 00:17:04
**/

// Note; 
// george and alex want to live in the same room 
// dormitory has n rooms 
// ith room has pi people 
// max qi 
// for both we need 2 rooms in total 
// pi < qi - 1 
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
  int n; cin >> n;
  int result = 0;  
  while(n--) {
  	int p, q; cin >> p >> q ; 
  	if(p < q - 1) {
  		result++;
  	}
  }

  cout << result << endl; 
  
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
    return 0;
}
