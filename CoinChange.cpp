#include<bits/stdc++.h>
using namespace std;


     int ans[12 + 1][10000 + 1];
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        int wt = amount;
       for(int i=0;i<=n;i++){
            for(int j=0;j<=wt;j++){
                if(i==0 || j==0){
                    if(j== 0)
                        ans[i][j] = 0;
                    else
                        ans[i][j] = INT_MAX-1;
                }
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=amount;j++){
                if(coins[i-1] <= j){
                    ans[i][j] = min( ans[i-1][j], 1+ ans[i][j-coins[i-1]]);
                }
                else
                    ans[i][j] = ans[i-1][j];
                
            }
        }
        if(ans[n][wt] == INT_MAX-1)
            return -1;
        return ans[n][wt];
        
    }
