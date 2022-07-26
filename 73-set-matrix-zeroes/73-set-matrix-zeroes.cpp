class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        int col0 = 1;
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        
        //use first row and first column as dummy array to store the possible 0s
        for(int i=0;i<rows;i++)
        {
            if(matrix[i][0]==0)
                col0=0;
            
            for(int j=1;j<cols;j++)
            {
                if(matrix[i][j]==0)
                {
                    matrix[i][0] = matrix[0][j] = 0;
                }
                    
            }
        }
        
        
        //start from behind and fill up the existing matrix with 0s 
        for(int i=rows-1;i>=0;i--)
        {
            for(int j=cols-1;j>=1;j--)
            {
                if(matrix[i][0]==0 || matrix[0][j]==0)
                {
                    matrix[i][j]=0;
                }
            }
            if(col0==0)
                matrix[i][0]=0;
            
        }
        
        
    }
};