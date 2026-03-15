class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        priority_queue<int> pq;
        int i;
        for(i = 0; i<k; i++){
            pq.push(arr[i]);
        }
        for(i = k; i<n; i++){
            if(arr[i]> pq.top()){
                continue;
            }
            pq.pop();
            pq.push(arr[i]);
        }
        return pq.top();
    }
};