class Solution {
public:
    bool wordPattern(string pattern, string s) {

        unordered_map<char, int> mp1;
        unordered_map<string, int> mp2;

        stringstream ss(s);  // we write string stream just to read full word of string 
        // this question is same as 205 Leetcode just use string stream word

        string word;

        int i = 0;

        while(ss >> word){

            if(mp1[pattern[i]] != mp2[word]){
                return false;
            }

            mp1[pattern[i]] = i + 1;
            mp2[word] = i + 1;

            i++;
        }
        // this is used for the edge case of single word appears it will return false
        if(i != pattern.length()){
            return false;
        }        

        return true;
    }
};