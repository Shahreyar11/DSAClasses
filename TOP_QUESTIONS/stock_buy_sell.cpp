class Solution {
  public:
    int maxProfit(vector<int> &prices) {
        // code here
        int n = prices.size();
        int res = 0;
        int low = 0;
        int high = 1;
        while(high < n){
            if(prices[low] > prices[high]){
                low = high;  // new buying day
            }
            else{
                int curr_profit = prices[high] - prices[low];
                res = max(res,curr_profit);
            }
            high++;
        }
        return res;
    }
};