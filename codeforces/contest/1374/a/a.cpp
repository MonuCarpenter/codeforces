/*
 * Author: Monu Carpenter
 * Time: 2024-06-26 21:19:40
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int test_cases; cin >> test_cases; 

    while(test_cases--) {
	 int x,y,n; cin >> x >> y >> n; 

	 ll result  = 0;

	 result = n - n % x + y; 

	 if(result <= n) 
		 cout << result << endl;
	 else 
		 cout << (n - n % x - (x - y)) << endl;
    }
    return 0;
}
