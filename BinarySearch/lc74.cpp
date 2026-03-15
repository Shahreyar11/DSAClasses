class Solution {
public:
// we are assuming whole matrix as a single sorted array
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size(); // no of rows
        int m = matrix[0].size(); // no of coloumns
        int low = 0;
        int high = (n*m) - 1;
        while(low <= high){
            int guess = (low + high)/2;
            int row = guess/m;  // current row for given guess
            int col = guess % m;  // current coloumn for given row
            if(matrix[row][col] == target){
                return true;
            }
            else if(matrix[row][col] < target){
                low = guess + 1;
            }
            else{
                high = guess - 1;
            }
        }
        return false;
    }
};