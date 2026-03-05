class Solution {
  public:
    bool fun(vector<int> &stalls, int n, int k, int guess){
        int cow = 1;
        int prevPos = stalls[0];
        for(int i = 1; i<n; i++){
            int dist = stalls[i] - prevPos;
            if(dist < guess){
                continue;
            }
            cow++;
            prevPos = stalls[i];
        }
        if(cow >= k){
            return true;
        }
        else{
            return false;
        }
    }
    int aggressiveCows(vector<int> &stalls, int k) {
        // code here
        int n = stalls.size();
        sort(stalls.begin(), stalls.end());
        int low = 1;
        int high = stalls[n-1] - stalls[0];
        int res = -1;
        while(low <= high){
            int guess = (low + high)/2;
            if(fun(stalls,n,k,guess)){
                res = guess;
                low = guess + 1;
            }
            else{
                high = guess - 1;
            }
        }
        return res;
        
    }
};