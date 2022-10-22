#include<bits/stdc++.h>
 using namespace std;
  void helper(vector<int> nums,vector<int> &ans,vector<vector<int>> &output, int start){
        if(ans.size() == nums.size()){
            output.push_back(ans);
        }
        for(int i=0;i<nums.size();i++){
            if(std::find(ans.begin(),ans.end(), nums[i]) != ans.end()){
                continue;
            }
            ans.push_back(nums[i]);
            helper(nums,ans,output,i);
            ans.pop_back();
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> ans;
        vector<vector<int>> output;
        helper(nums,ans,output,0);
        return output;
        
    }