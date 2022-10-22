 #include<bits/stdc++.h>
 using namespace std;
 vector<vector<int>> reconstructMatrix(int upper, int lower, vector<int>& colsum) {
        vector<vector<int>> ans(2, vector<int> (colsum.size(),0));
        for(int i=0;i<colsum.size();i++){
            if(colsum[i] == 2){
                ans[0][i] = 1;
                ans[1][i] = 1;
                upper--;
                lower--;
                if(lower < 0 || upper < 0)
                    return {};
            }
        }
        
            for(int i=0;i<colsum.size();i++){
            if(colsum[i] == 1 && upper > 0){
                ans[0][i] = 1;
                upper--;
            } 
            else if(colsum[i] == 1 && upper == 0){
                ans[1][i] = 1;
                lower--;
                
            }
            if(lower < 0)
                return {};
        }
        if(lower != 0 || upper !=0)
            return{};
        return ans;
    }