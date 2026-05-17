class Solution {
public:

    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int n1 = m;
        int n2 = n;

        int i = n1 - 1;
        int j = n2 - 1;
        int s = m + n - 1;

        if(n2 == 0){
            return;
        }

        while(j >= 0){

            if(i >= 0 && nums1[i] > nums2[j]){
                nums1[s] = nums1[i];
                i--;
            }
            else{
                nums1[s] = nums2[j];
                j--;
            }

            s--;
        }

        return;
    }
};


class Solution {
public:

    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m -1;
        int j = n - 1;
        int k = m + n -1;
        if(n == 0){
            return;
        }
        while(j >= 0){
            if(i >= 0 and nums1[i] > nums2[j]){
                nums1[k] = nums1[i];
                i--;
            }
            else{
                nums1[k] = nums2[j];
                j--;
            }
            k--;
        }
        return;
    }
};