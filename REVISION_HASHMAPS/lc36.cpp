class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n = board.size();      // rows
        int m = board[0].size();   // columns

        // Check every row
        for(int i = 0; i < n; i++){
            unordered_map<char,int> row_elem;

            for(int j = 0; j < m; j++){

                if(board[i][j] == '.') continue;

                row_elem[board[i][j]]++;

                if(row_elem[board[i][j]] > 1){
                    return false;
                }
            }
        }

        // Check every column
        for(int i = 0; i < m; i++){
            unordered_map<char,int> col_elem;

            for(int j = 0; j < n; j++){

                if(board[j][i] == '.') continue;

                col_elem[board[j][i]]++;

                if(col_elem[board[j][i]] > 1){
                    return false;
                }
            }
        }

        // Check every 3x3 box
        for(int startRow = 0; startRow < 9; startRow += 3){

            for(int startCol = 0; startCol < 9; startCol += 3){

                unordered_map<char,int> box_elem;

                for(int i = 0; i < 3; i++){

                    for(int j = 0; j < 3; j++){

                        char ch = board[startRow + i][startCol + j];

                        if(ch == '.') continue;

                        box_elem[ch]++;

                        if(box_elem[ch] > 1){
                            return false;
                        }
                    }
                }
            }
        }

        return true;
    }
};