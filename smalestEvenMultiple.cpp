#include <bits/stdc++.h>
using namespace std;

 int smallestEvenMultiple(int n) {
        int ans = 0;
        if(n%2 == 0){
            ans = n;
        }
        else {
            ans = n*2;
        }
        return ans;
        
    }