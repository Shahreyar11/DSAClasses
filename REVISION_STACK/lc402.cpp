#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    string removeKdigits(string num, int k) {
        int n = num.size();
        if (k == n)
            return "0";

        string ans = "";
        stack<char> st;
        for (char s : num) {
            while (!st.empty() && st.top() > s && k > 0) {
                st.pop();
                k--;
            }
            st.push(s);
        }
        while (k > 0) {
            st.pop();
            k--;
        }
        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        int i = 0;
        while (i < ans.size() && ans[i] == '0')
            i++;

        ans = ans.substr(i);

        if (ans.empty())
            return "0";

        return ans;
    }
};