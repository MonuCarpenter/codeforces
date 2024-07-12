/*
 * Author: Monu Carpenter
 * Time: 2024-07-10 18:48:03
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int solve() {
     string s; cin >> s;
     
     int size  = s.size();
    
     if(size%2 != 0 || size < 2) {
      cout << "YES" << endl; 
      return 0; 
     } 

     int start = 0, end = size - 1; 

     while(start <= end) {
      if(s[start] != s[end]) {
        cout << "NO" << endl; 
	return 0; 
      }

      start++; 
      end--; 
    }
    cout << "YES" << endl; 
    return 0; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int tc; cin >> tc; 

    for(int i=0; i<tc; i++){
      solve(); 
    } 

    return 0;
}
