class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        vector<int> freq(26,0);

        int max_freq = 0;
        int ans = 0;
        int low = 0;

        for(int high = 0; high <n; high++){

            freq[s[high]-'A']++;

            max_freq = max(max_freq, freq[s[high]-'A']);

            while((high - low + 1) - max_freq > k){
                freq[s[low]-'A']--;
                low++;
            }
            ans = max(ans, high - low + 1);
        }
        return ans;

    }
};