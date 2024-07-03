class Solution {
public:

    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<pair<int,int>,int>> q;
        int m = grid.size();
        int n = grid[0].size();
        int vis[m][n];
        for(int i=0;i<m;i++){
            for(int j =0; j<n;j++){
                if(grid[i][j]==2){
                    vis[i][j]=1;
                    q.push({{i,j},0});
                }
                else{
                    vis[i][j]=0;
                }
            }
        }
              int delrow[] = {-1,0,1,0}; 
              int delcol[] = {0,-1,0,1};
                //Simple bfs
              int tm=0;
              while(!q.empty()){
                  int r = q.front().first.first;
                  int c = q.front().first.second;
                  int t = q.front().second;
                  tm = max(tm,t);
                  q.pop();
                  
                     for(int i=0;i<4;i++){
                   int nrow = r+delrow[i];
                   int ncol = c+delcol[i];  
                   if(nrow>=0 && ncol>=0 && nrow<m && ncol<n && 
                   grid[nrow][ncol] == 1 && vis[nrow][ncol] != 2){ 
                       q.push({{nrow,ncol},t+1});
                       vis[nrow][ncol]=2; 
                   }
              }
            
              }
       
              for(int i=0;i<m;i++){
                  for(int j=0;j<n;j++){
                      if(vis[i][j] !=2 && grid[i][j]== 1){
                         return -1;
                      }
                  }
              }
     return tm;
    }
};