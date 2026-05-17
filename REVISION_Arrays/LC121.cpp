// BRUTE FORCE

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res = 0;
        int n = prices.size();
        int profit = 0;
        int buy = prices[0];
        for(int i = 1; i < n - 1; i++){
            if(prices[i] < buy){
                buy = prices[i];
            }
            profit = prices[i+1] - buy;
            res = max(profit, res);
        }
        return res;
    }
};

// 177/206 test cases passed

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res = 0;
        int n = prices.size();
        int profit = 0;
        int buy = prices[0];
        for(int i = 0; i < n - 1; i++){
            if(prices[i] < buy){
                buy = prices[i];
            }
            profit = prices[i+1] - buy;
            res = max(profit, res);
        }
        return res;
    }
};

// All test cases passed 

// OPTIMAL ONE ( not in complexity but using less line of codes)

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int profit = 0;

        for(int i = 1; i < prices.size(); i++) {

            buy = min(buy, prices[i]);

            int currentProfit = prices[i] - buy;    // We dont only check for the another day or the future day
            // we even check for the same day for stock selling if it is in profit we can sell it

            profit = max(profit, currentProfit);
        }

        return profit;
    }
};