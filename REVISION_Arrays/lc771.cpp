class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int n = jewels.size();
        int m = stones.size();
        int ans = 0;
        unordered_map<char,int> m1;
        unordered_map<char,int> m2;
        for(int i = 0; i<n; i++){
            m1[jewels[i]]++;
        }
        for(int i = 0; i<m; i++){
            m2[stones[i]]++;
        }
        for(auto it: m2){
            char key = it.first;
            int val = it.second;
            if(m1.find(key) != m1.end()){
                ans += val;
            }
        }
        return ans;
    }
};