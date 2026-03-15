class Solution {
  public:
    bool fun(vector<int> &arr, int n, int limit, int stud){
      int k = 1;
      int page = 0;
      for(int i = 0; i<n; i++){
          if(page + arr[i] <= limit){
              page = page + arr[i];
          }
          else{
              k++;
              page = arr[i];
              if(k > stud){
                  return false;
              }
          }
      }
      return true;
  }
    int findPages(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        if(n < k){
            return -1;
        }
        int low = 0;
        int high = 0;
        for(int i = 0; i<n; i++){
            low = max(low, arr[i]);
            high += arr[i];
        }
        int res = -1;
        while(low <= high){
            int guess = low + (high - low)/2;
            if(fun(arr,n,guess,k)){
                res = guess;
                high = guess - 1;
            }
            else{
                low = guess + 1;
            }
        }
        return res;
    }
};