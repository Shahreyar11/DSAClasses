class Solution {
public:
    bool isAnagram(string s, string t) {
        int n1 = s.length();
        int n2 = t.length();
        if(n1 != n2) return false;
        bool res = false;
        unordered_map<char, int> f1;
        unordered_map<char,int> f2;
        for(char ch: s ){
            f1[ch]++;
        }
        for(char ch: t){
            f2[ch]++;
        }
        for(auto it : f1) {

            char alpha = it.first;
            int val = it.second;

            if(val != f2[alpha]) {
                return false;
            }
        }

        return true;

    }
};