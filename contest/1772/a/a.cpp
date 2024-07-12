/*
 * Author: Monu Carpenter
 * Time: 2024-06-26 19:37:12
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int test_cases; cin >> test_cases;
     
    for(int i=0; i < test_cases; i++) {    
    string s;  cin >> s;  
    
    cout << ((s[0] - '0' ) + (s[2] - '0')) << endl; 
    }
    return 0;
}
