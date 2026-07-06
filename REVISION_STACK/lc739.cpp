#include<bits/stdc++.h>
using namespace std;

// this was my bruteforce approach
// and it ran 36/48 Test Cases

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> answer(n);
        for(int i = 0; i<n-1; i++){
            stack<int> st;
            st.push(temperatures[i]);
            int curr = temperatures[i];
            for(int j = i +1; j<n; j++){
                if(temperatures[j] > curr){
                    int res = st.size();
                    answer[i] = res;
                    break;
                }
                st.push(temperatures[j]);      
            }
        }
        return answer;
    }
};


// Optimal one
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n = temp.size();
        vector<int> res(n);
        stack<int> st;
        res[n-1] = 0; // since no next element is there to be greater
        st.push(n-1); // pushed last element to compare with previous element to check for next greater
        for(int i = n-2; i>=0; i--){
            while(!st.empty() and temp[st.top()] <= temp[i]){ //check if next is greater or smaller
                st.pop();
            }
            if(st.empty()){
                res[i] = 0;
            }
            else{
                res[i] = st.top() - i;
            }
            st.push(i);
        }
        return res;
    }
};