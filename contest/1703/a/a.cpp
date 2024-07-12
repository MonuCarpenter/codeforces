/*
 * Author: Monu Carpenter
 * Time: 2024-07-10 18:37:32
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    string s; cin >> s; 

    if(tolower(s[0]) == 'y' && tolower(s[1]) == 'e' && tolower(s[2]) == 's') {
      cout << "YES" << endl; 
    } else {
     cout << "NO" << endl; 
    }
 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int tc; cin >> tc; 

    for(int i=0; i<tc; i++) {
      solve();
    }
    return 0;
}
