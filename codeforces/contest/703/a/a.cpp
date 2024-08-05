/**
 * Author: Monu Carpenter
 * Time: 2024-06-26 17:30:29
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

         int mishka_win_count = 0; 
         int cris_win_count = 0; 
	    
		int n; cin >> n; 

		for(int i = 0; i < n; i++) {
			  int x,y; cin >> x >> y; 
	
		if(x > y) {
	  		mishka_win_count++;
		} else if(x < y) {
	  		cris_win_count++; 
		} else {} 
		
		}
	    
		if(mishka_win_count > cris_win_count) {
			cout << "Mishka" << endl;
		} else if(mishka_win_count < cris_win_count) {
			cout << "Chris" << endl; 
		} else {
			cout << "Friendship is magic!^^" << endl; 
		}


    return 0;
}
