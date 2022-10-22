 #include<bits/stdc++.h>
using namespace std;
int longestContinuousSubstring(string s) {
        int maxi  =INT_MIN;
        int n = s.length();
        if(n == 1)
            return 1;
        int i = 0;
        while(i < n-1){//for(int i=0;i<n-1;i++){
            int count = 1;
            while((int)s[i] - (int)s[i+1] == -1){
                count++;
                i++;
            }
           // i+=i;
            maxi = max(count,maxi);
            i++;
        }
        return maxi;
    }