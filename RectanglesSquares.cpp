#include<bits/stdc++.h>
 using namespace std;
 
 int countGoodRectangles(vector<vector<int>>& rectangles) {
        map<int,int> mp;
        int mini = INT_MAX;
        for(int i=0;i<rectangles.size();i++){
          
                mini = min(rectangles[i][0], rectangles[i][1]);
            mp[mini]++;

        }
        int size = mp.size();
        auto it=mp.end();
        it--;
        int element=it->second;
        return element;//mp
    }