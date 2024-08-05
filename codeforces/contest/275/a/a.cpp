/*
 * Author: Monu Carpenter
 * Time: 2024-06-27 02:21:39
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

class Solution {
  public:
	  void toggle(int (&matrix)[3][3], int i, int j){ 
	       matrix[i][j] = !matrix[i][j]; 

	       if(i < 2) matrix[i+1][j] = !matrix[i+1][j]; 
	       if(j < 2) matrix[i][j +1] = !matrix[i][j+1]; 
	       if(i > 0) matrix[i-1][j] = !matrix[i-1][j]; 
	       if(j > 0) matrix[i][j-1] = !matrix[i][j-1];
	  }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int matrix[3][3] = {{1,1,1}, {1,1,1}, {1,1,1}}; 
    Solution s;
    
    for(int i = 0; i < 3; i++) {
       for(int j=0; j<3; j++) {
	        int x; cin >> x; 
		if(x % 2 != 0) 	s.toggle(matrix, i, j);      	       
       } 
    }

    for(int i=0; i<3; i++) {
    	for(int j=0; j<3;j++) {
	   cout << matrix[i][j]; 
	}
	cout << endl; 

    }
    return 0;
}
