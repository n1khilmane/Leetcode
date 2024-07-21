class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        vector<unordered_set<char>> rows(9);
        vector<unordered_set<char>> col(9);
        vector<unordered_set<char>> boxes(9);
        
        
        for(int r=0;r<9;r++)
        {
            for(int c=0;c<9;c++)
            {
                if(board[r][c]=='.')
                {
                    continue;
                }
                
                int boxindex = (r/3*3) + (c/3);
                char value = board[r][c];
                if(rows[r].count(value) || col[c].count(value) || boxes[boxindex].count(value))
                    return false;
                
                rows[r].insert(board[r][c]);
                col[c].insert(board[r][c]);
                boxes[boxindex].insert(board[r][c]);
            }
        }
        
       return true; 
    }
};