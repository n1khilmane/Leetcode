class Solution {
public:
    
    void dfshelper(vector<vector<char>>& mat, int x, int y, int r, int c)
    {
        
        if(x<0 || x>=r || y<0 || y>=c || mat[x][y]!='1')
            return;
        
        mat[x][y] = '2';
        
        dfshelper(mat,x+1,y,r,c);
        dfshelper(mat,x,y+1,r,c);
        dfshelper(mat,x-1,y,r,c);
        dfshelper(mat,x,y-1,r,c);
             
        
    }
    

    int numIslands(vector<vector<char>>& grid) {
        
        int r = grid.size();
        int c = grid[0].size();
        int count=0;
        
        if(r==0) return 0;
        
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j]=='1')
                {
                    dfshelper(grid,i,j,r,c);
                    count++;
                }
            }
            
        }
        
        return count;
        
        
        
    }
    
    
};