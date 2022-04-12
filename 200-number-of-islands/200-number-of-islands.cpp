class Solution {
public:
    
    void make_call(vector<vector<char>> &grid,int rows,int cols,int x,int y)
    {
        if(x<0 || x>=rows || y<0 || y>=cols || grid[x][y]!='1')
            return;
        
        grid[x][y]='2';
        
       make_call(grid,rows,cols,x+1,y);
        make_call(grid,rows,cols,x-1,y); 
        make_call(grid,rows,cols,x,y+1);
        make_call(grid,rows,cols,x,y-1); 
        }
    
    
    
    int numIslands(vector<vector<char>>& grid) {
        if(grid.size()==0)
            return 0;
        int m=grid.size();
        int n=grid[0].size();
        int no_of_islands=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]=='1')
                {
                   make_call(grid,m,n,i,j);
                    no_of_islands+=1;
                }
            }
        }
        return no_of_islands;
        
    }
};