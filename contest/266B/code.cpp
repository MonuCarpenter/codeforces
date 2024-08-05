/*
 * Author: Monu Carpenter
 * Time: 2024-07-31 23:33:35
**/

#include <bits/stdc++.h>
using namespace std;

// boy and girls n 
// queue of n 
// each second girl move forward 
// time x: boy ith and girl i+1 position 
// at time x+1: boy will be at i+1 and i th will be for the girl 
// BGGBG 1s
// GBGGB
 
// BGGBG
// GBGGB
// GGBGB

typedef long long ll;

void solve() {
    int n,k; cin >> n >> k; 

    string s; cin >> s; 

    while(k--) {
    	for(int i=1; i<s.size(); i++) {
    		if(s[i-1] == 'B' && s[i] == 'G') {
    			char temp = s[i]; 
    			s[i] = s[i-1];
    			s[i-1] = temp; 
    			i++;
    		}
    	}
    }

    cout << s << endl; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
    return 0;
}
