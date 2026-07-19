class Solution {
public:
    bool canReach(vector<int>& start, vector<int>& target) {
        int n = start.size();
        int m = target.size();
        int moves = 0;
        while(start == target){
            if(start[0] < target[0] && start[1] < target[1]){
                start[0] += 2;
                start[1] += 1;
                moves++;
            }
            else if(start[0] > target[0] && start[1] > target[1]){
                start[0] -= 1;
                start[1] += 2;
                moves++;
            }
            else if(start[0] > target[0] && start[1] < target[1]){
                start[0] -= 2;
                start[1] += 2;
                moves++;
            }
            else if(start[0] < target[0] && start[1] > target[1]){
                start[0] -= 1;
                start[1] += 2;
                moves++;
            }            
            
        }
        if(moves % 2 == 0){
            return true;
        }
        return false;
    }
};©leetcode





class Solution {
public:
    bool canReach(vector<int>& start, vector<int>& target) {
        if((start[0] + start[1])%2 == 0){
            if((target[0] + target[1]) % 2 == 0){
                return true;
            }
            else{
                return false;
            }
        }
        else{
            if((target[0] + target[1]) % 2 == 1){
                return true;
            }
            else{
                return false;
            }
        }
        return false;
    }
};©leetcode