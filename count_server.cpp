#include<bits/stdc++.h>
using namespace std;

    int countServers(vector<vector<int>>& grid) {
     vector<int> row(grid.size(),0);
        int n = grid.size();
        int m = grid[0].size();
     vector<int> col(grid[0].size(),0);
        for(int i = 0;i < n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] == 1){
                    row[i]++;
                    col[j]++;
                }
            }
        } 
        int ans = 0;
        for(int i = 0;i < n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] && (row[i]>1 || col[j]>1))
                    ans++;
            }
        }
        
        return ans;
            }
