#include<bits/stdc++.h>
 using namespace std;
     void helper(vector<int> nums, vector<vector<int>> &ans, int index){
        if(index == nums.size()){
            //st.insert(nums);
            ans.push_back(nums);
            return;
        }
        
        else{
        for(int i=index;i<nums.size();i++){
            if((i == index) || (nums[i] != nums[index])){
              swap(nums[i], nums[index]);
              helper(nums,ans,index+1);
           
            }// swap(nums[i], nums[index]);
            
        }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
       sort(nums.begin(), nums.end());
        helper(nums, ans, 0);
        return ans;
    }