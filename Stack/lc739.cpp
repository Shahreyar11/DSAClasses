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