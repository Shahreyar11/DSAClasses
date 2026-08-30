class Solution {
public:
    int compress(vector<char>& chars) {
        string res = "";
        for(int i = 0; i < chars.size(); i++) {
            char ch = chars[i];
            int count = 0;
            while(i < chars.size() && chars[i] == ch) {
                count++;
                i++;
            }
            res += ch;

            if(count > 1)
                res += to_string(count);

            i--; 
        }
        for(int i = 0; i < res.size(); i++) {
            chars[i] = res[i];
        }

        return res.size();
    }
};