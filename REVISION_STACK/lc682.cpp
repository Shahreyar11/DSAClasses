
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int calPoints(vector<string>& operations) {
        int n = operations.size();
        int res = 0;
        stack<int> st;

        for (int i = 0; i < n; i++) {

            if (operations[i] == "C") {
                if (!st.empty()) {
                    st.pop();
                }
            }

            else if (operations[i] == "D") {
                int curr = st.top();
                curr *= 2;
                st.push(curr);
            }

            else if (operations[i] == "+") {
                int first = st.top();
                st.pop();

                int second = st.top();

                st.push(first);               
                st.push(first + second);      
            }

            else {
                st.push(stoi(operations[i])); 
            }
        }

        while (!st.empty()) {
            res += st.top();
            st.pop();
        }

        return res;
    }
};