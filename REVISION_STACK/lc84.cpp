#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> left(n);  // left smaller nearest
        vector<int> right(n);  // right smaller nearest
        stack<int> st;

        // calculating right smaller
        for(int i = n-1; i>=0; i--){
            while(!st.empty() && heights[st.top()] >= heights[i]){
                st.pop();
            }
            right[i] = st.empty() ? n : st.top();
            st.push(i);
        }

        // removing left out elements from stack

        while(!st.empty()){
            st.pop();
        }


        // calculating left smaller
        for(int i = 0; i<n; i++){
            while(!st.empty() && heights[st.top()] >= heights[i]){
                st.pop();
            }
            left[i] = st.empty() ?  -1 : st.top();
            st.push(i);
        }  
        int ans = 0;

        for(int i = 0; i<n; i++){
            int width = right[i] - left[i] - 1;
            int currArea = heights[i] * width;
            ans = max(ans,currArea);

        }
        return ans;             

    }
};