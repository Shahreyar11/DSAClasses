class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> res;
        int n = intervals.size();
        int start1 = intervals[0][0];
        int end1 = intervals[0][1];
        for(int i = 1; i<n; i++){
            int start2 = intervals[i][0];
            int end2 = intervals[i][1];
            if(end1 >= start2){ // merge possible
                start1 = min(start1, start2);
                end1 = max(end1,end2);
                continue;
            }
            res.push_back({start1, end1});
            start1 = start2;
            end1 = end2;
        }
        res.push_back({start1, end1});  // after all loop ends, one last pair is left so we pushed it in last.
        return res;
    }
};