#include<bits/stdc++.h>
using namespace std;

// 21/99 Cases

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        // code here
        int n = heights.size();
        int min_elem = heights[0];
        for(int i = 1; i<n; i++){
            min_elem = min(min_elem, heights[i]);
        }
        int area = min_elem * n;
        return area;
    }
};

// 23/99 cases
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        // code here
        int n = heights.size();
        int area = 1;
        int res = 0;
        stack<int> st;
        for(int i = 0; i<n; i++){
            st.push(heights[i]);
        }
        for(int i = 0; i<n; i++){
            int count = 0;
            while(!st.empty() && st.top() >= heights[i]){
                count++;
                int curr_area = heights[i] * count;
                area = max(area, curr_area);
                st.pop();
            }
            res = max(res,area);
        }
        return res;
    }
};