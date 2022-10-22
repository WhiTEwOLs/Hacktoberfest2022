 #include <bits/stdc++.h>
using namespace std;

void helper(vector<int> &nums,vector<vector<int>> &out, vector<int> &ans, int target, int index, set<vector<int>> &st){
        if(target < 0)
            return;
        if(target == 0){
          
            st.insert(ans);
//            out.push_back(ans);
            return;
        }
        else{
            for(int i = index;i < nums.size();i++){
                 if(nums[i]>target)
                     return;
                if(i && nums[i]==nums[i-1] && i>index)
                    continue;
                ans.push_back(nums[i]);
                helper(nums, out,ans, target - nums[i], i+1, st);
                ans.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> out;
        vector<int> ans;
        set<vector<int>> st;
          sort(candidates.begin(), candidates.end());
        helper(candidates,out, ans, target, 0, st);
        cout<<"Set"<<"\n";
        for(auto it: st){
            // vector<int> v = it;
            // for(int i=0;i<v.size();i++){
            //     cout<<v[i]<<" ";
            // }
            // cout<<"\n";
            out.push_back(it);
           // cout<<it<<" ";
        }
        return out;
 
        
    }