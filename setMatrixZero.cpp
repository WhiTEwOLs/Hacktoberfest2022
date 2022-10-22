#include<bits/stdc++.h>
using namespace std;
void setZeroes(vector<vector<int>>& matrix) {
	int n = matrix.size();
	int m = matrix[0].size();
	if (n == 0 || m == 0)
		return;
    vector<int> r;
    vector<int> c;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (matrix[i][j] == 0) {
                r.push_back(i);
                c.push_back(j);
			}
		}
	}
    for(auto x : r){
     
   for (int j = 0; j < m; j++) {
		matrix[x][j] = 0;
	} 
    }
    
    for(auto y : c){
     
    for (int i = 0; i < n; i++) {
		matrix[i][y] = 0;
	}   
    }
    
	// for (int i = 0; i < n; i++) {
	// 	for (int j = 0; j < m; j++) {
	// 		if (matrix[i][j] == -1)
	// 			matrix[i][j] = 0;
	// 	}
	// }
}