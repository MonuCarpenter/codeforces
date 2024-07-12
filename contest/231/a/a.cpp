/*
 * Author: Monu Carpenter
 * Time: 2024-07-10 21:36:07
**/


#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int solve() {
    int n; cin >> n; 
    int result = 0; 
    
    while(n--) { 
     int x, y, z; cin >> x >> y >> z; 
             
     if(y == 1 || z == 1) {
     	result++; 
     }    	
    }

    cout << result << endl; 
    
   return 0; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    solve();    
    return 0;
}
