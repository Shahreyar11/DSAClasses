class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int low = 0;
        int high = n-1;
        int res;
        while(low <= high){
            int mid = (low + high)/2;
            if(arr[mid] > arr[mid + 1]){   // We check for the first peak aur first turning point
                // the monoticity goes like uphill uphill uphill uphill downhill downhill so that last uphill is the answer
                // So how do we checked it we check if mid > mid + 1 but it can be a downhill element too
                // thats why we did high = mid - 1 in case it is it will check for more left
                res = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return res;
    }
};

// we can even solve it by brute force as checking mid > mid + 1 && mid > mid -1 but it creates time limit exceed issue