class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        int n1 = nums1.size();
        int n2 = nums2.size();
        
        //creating hashmap
        unordered_map<int,int> f1;
        unordered_map<int,int> f2;

        for(int i = 0; i<n1; i++){
            f1[nums1[i]]++;
        }
        for(int i = 0; i<n2; i++){
            f2[nums2[i]]++;
        }
        for(auto it: f1){
            int key = it.first;
            int val = it.second;
            if(f2.find(key) != f2.end()){
                res.push_back(key);
            }
        }
        return res;
    }
};