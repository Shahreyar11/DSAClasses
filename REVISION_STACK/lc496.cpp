#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        unordered_map<int, int> mp;
        stack<int> st;
        for (int num : nums2) {
            while (!st.empty() && num > st.top()) {
                mp[st.top()] = num;
                st.pop();
            }
            st.push(num);
        }
        while (!st.empty()) {
            mp[st.top()] = -1;
            st.pop();
        }
        vector<int> ans;
        for (int num : nums1) {
            ans.push_back(mp[num]);
        }
        return ans;
    }
};


// Better approach and easy one
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums2.size();
        unordered_map<int,int> mp;
        stack<int> st;
        for(int i = n-1; i >= 0; i--){
            while(!st.empty() && st.top() <= nums2[i]){
                st.pop();
            }
            if(st.empty()){
                mp[nums2[i]] = -1;
            }
            else{
                mp[nums2[i]] = st.top();
            }
            st.push(nums2[i]);
        }
        vector<int> ans;
        for(int num: nums1){
            ans.push_back(mp[num]);
        }
        return ans;
    }
};