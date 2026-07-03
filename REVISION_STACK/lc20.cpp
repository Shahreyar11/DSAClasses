// Brute Force I did 
// 52/102 test cases passed
#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        bool res = false;
        stack<char> st;
        st.push(s[0]);
        for(int i = 1; i<n; i++){
            if((st.top() == '(') and s[i] == ')'){
                res = true;
                st.pop();
                st.push(s[i+1]);
            }
            else if((st.top() == '{') and s[i] == '}'){
                res = true;
                st.pop();
                st.push(s[i+1]);
            }
            else if((st.top() == '[') and s[i] == ']'){
                res = true;
                st.pop();
                st.push(s[i+1]);
            }
            else{
                st.push(s[i]);
            }                           

        }
        return res;
    }
};


// the optimal approach
class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        stack<char> st;

        for(int i = 0; i<n; i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                st.push(s[i]);
            }
            else{
                if(st.empty()){
                    return false;
                }
                else if((s[i] == ')' && st.top() =='(') ||
                        (s[i] == ']' && st.top() =='[') ||
                        (s[i] == '}' && st.top() =='{')){
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }

        return st.empty();
    }
};
