 #include<bits/stdc++.h>
using namespace std;
string removeStars(string s) {
        stack<char> st;
        for(int i=0;i<s.length();i++){
            if(s[i] != '*'){
                st.push(s[i]);
            }
            else if(s[i] == '*'){
                st.pop();
            }
        }
        string str = "";
        while(!st.empty()){
            str+=st.top();
            st.pop();
        }
        reverse(str.begin(), str.end());
        return str;
        
    }