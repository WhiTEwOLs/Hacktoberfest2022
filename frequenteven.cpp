  #include<bits/stdc++.h>
using namespace std;
int mostFrequentEven(vector<int>& nums) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2 == 0){
                mp[nums[i]]++;
            }
        }
        if(mp.size() == 0)
            return -1;
        int mini  = INT_MIN;
        int element = INT_MIN;
        for(auto it: mp){
            if(mini < it.second){
                mini = it.second;
                element = it.first;
            }
            if(mini == it.second){
                element = min(element, it.first);
            }
        }
        
        return element;
    }