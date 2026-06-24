class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int n = text.size();
        unordered_map<char,int> have;
        unordered_map<char, int> need;
        need['b'] = 1;
        need['a'] = 1;
        need['l'] = 2;
        need['o'] = 2;
        need['n'] = 1;
        int res = INT_MAX;
        for(int i = 0; i<n; i++){
            have[text[i]]++;
        }
        for(auto i: need){
            char needKey = i.first;
            int needVal = i.second;
            int haveVal = have[needKey];
            int times = haveVal/needVal;
            res = min(res, times);
        }
        return res;
    }
};