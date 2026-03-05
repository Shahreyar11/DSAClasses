class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
       unordered_map<char,int>needFreq;
       unordered_map<char,int>haveFreq;

       for(int i=0;i<ransomNote.size();i++){
            needFreq[ransomNote[i]]++;
       } 
       for(int i=0;i<magazine.size();i++){
         haveFreq[magazine[i]]++;
       } 

       for(auto itr:needFreq){
            char needKey=itr.first;
            int needValue=itr.second;

            int haveValue=haveFreq[needKey];

            if(needValue>haveValue){
                return false;
            }

       }
       return true;
    }
    
};




class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n1 = ransomNote.size();
        int n2 = magazine.size();
        int i;
        unordered_map<char,int> ransomMap;
        unordered_map<char,int> magazineMap;
        for(i = 0; i<n1; i++){
            ransomMap[ransomNote[i]]++;
        }
        for(i = 0; i<n2; i++){
            magazineMap[magazine[i]]++;
        }
        for(auto i: ransomMap){
            char c = i.first;
            int need = i.second;
            int fhave = magazineMap[c];
            if(fhave < need){
                return false;
            }
        }
        return true;
    }
};