class Solution {
public:
    bool isIsomorphic(string s, string t) {

        unordered_map<char,char> mp1;
        unordered_map<char,char> mp2;

        for(int i = 0; i < s.length(); i++){

            char a = s[i];
            char b = t[i];

            // check s -> t
            if(mp1.find(a) != mp1.end()){

                if(mp1[a] != b){   // we are mapping one element to another and checking if true or not
                    return false;
                }
            }
            else{
                mp1[a] = b;
            }

            // check t -> s
            if(mp2.find(b) != mp2.end()){

                if(mp2[b] != a){
                    return false;
                }
            }
            else{
                mp2[b] = a;
            }
        }

        return true;
    }
};


// Better approach

class Solution {
public:
    bool isIsomorphic(string s, string t) {

        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;

        for(int i = 0; i < s.length(); i++){

            if(mp1[s[i]] != mp2[t[i]]){
                return false;
            }

            mp1[s[i]] = i + 1;
            mp2[t[i]] = i + 1;   // So since the hashmap doesn't store serial wise we are adding index too to check correct location
        }

        return true;
    }
};