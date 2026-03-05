class Solution {
public:
    int longestPalindrome(string s) {
        int n = s.size();
        unordered_map<char,int> f;
        int res = 0;
        bool odd = false;
        for(int i = 0; i<n; i++){
            f[s[i]]++;
        }
        for(auto i: f){
            int value = i.second;
            if(value % 2 == 0){
                res += value;
            }
            else{
                odd = true;
                res += value - 1;
            }
        }
        if(odd == false){
            return res;
        }
        else{
            return res + 1;
        }
    }
};