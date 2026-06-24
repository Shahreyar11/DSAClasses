class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int count = 0;
        int sum = 0;
        int n = costs.size();
        sort(costs.begin(), costs.end());
        for(int i = 0; i<n; i++){
            sum += costs[i];
            if(sum > coins){
                sum -= costs[i];
                continue;
            }
            count++;
        }
        return count;
    }
};