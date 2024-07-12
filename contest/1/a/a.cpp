/*
 * Author: Monu Carpenter
 * Time: 2024-06-26 22:18:16
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    unsigned long long  n,m,a; cin >> n >> m >> a; 
 
    unsigned long long result = ceil((double)m/a) *  ceil((double)n/a); 

    cout << result << endl; 
    return 0;
}
