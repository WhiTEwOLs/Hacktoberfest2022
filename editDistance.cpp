
#include<bits/stdc++.h>
using namespace std;
int minDistance(string word1, string word2) {
        int m = word1.size();
        int n = word2.size();
        int **output = new int*[m+1];
        for(int i=0;i<=m;i++){
            output[i] = new int[n+1];
        }
      for(int i=0;i<=m;i++){
          output[i][0] = i;
      }
      for(int j=0;j<=n;j++){
          output[0][j] = j;
      }
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(word1[m-i] == word2[n-j]){
                    output[i][j] = output[i-1][j-1];
                }
                else{
                    int a = 1 + output[i-1][j];
                    int b = 1 + output[i][j-1];
                    int c = 1 + output[i-1][j-1];
                    output[i][j] = min(a,min(b,c));
                }
            }
        }
        return output[m][n];
        
    }