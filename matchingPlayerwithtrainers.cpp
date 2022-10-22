#include<bits/stdc++.h>
 using namespace std;
 int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(),players.end());
        sort(trainers.begin(), trainers.end());
        int n = players.size();
        int m = trainers.size();
        int j = 0, i = 0, count = 0;
        while(i < n && j < m){//for(int i=0;i<n;i++){
            if(players[i] <= trainers[j]){
                count++;
                i++;
            }
            j++;
        }
        return count;
    }