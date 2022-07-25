class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
    vector<set<int>>row(9);
    vector<set<int>>col(9);
    vector<set<int>>box(9);    
    for(int i =0 ; i<9 ; i++){
        for(int j=0 ; j<9 ; j++){
            if(board[i][j] == '.')
                continue;
            
        // refrencing variable which will take the value at index[i][j]
            int ref = board[i][j];
        //if count is 1 or (value is present already) return false
            if(row[i].count(ref))
                return false;
            if(col[j].count(ref))
                return false;
        // index for box 
            int box_index = (i/3)*3 + (j/3);
            if(box[box_index].count(ref))
                return false;
  //if no value is already present then insert the ref in row ,col,box   
            row[i].insert(ref);
            col[j].insert(ref);
            box[box_index].insert(ref);
        }
    }
//if everything goes fine i.e no repeating value is there , return True
    return true;
}
              
        
    
};