#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        for (int num : asteroids) {
            bool alive = true;   
            while (alive && !st.empty() && st.top() > 0 && num < 0) {

                if (abs(st.top()) < abs(num)) {
                    st.pop();
                }
                else if (abs(st.top()) == abs(num)) {
                    st.pop();
                    alive = false;
                }
                else {
                    alive = false;
                }
            }
            if (alive) {
                st.push(num);
            }
        }
        vector<int> ans(st.size());

        for (int i = st.size() - 1; i >= 0; i--) {
            ans[i] = st.top();
            st.pop();
        }

        return ans;
    }
};