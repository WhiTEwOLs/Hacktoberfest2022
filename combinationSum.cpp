 #include <bits/stdc++.h>
using namespace std;

void helper(vector<int> &nums,vector<vector<int>> &out, vector<int> &ans, int target, int index){
        if(target < 0)
            return;
        if(target == 0){
            out.push_back(ans);
            return;
        }
        else{
            for(int i = index;i < nums.size();i++){
                ans.push_back(nums[i]);
                helper(nums, out,ans, target - nums[i], i);
                ans.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> out;
        vector<int> ans;
        helper(candidates,out, ans, target, 0);
        return out;
    }