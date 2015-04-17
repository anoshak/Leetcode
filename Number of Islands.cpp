class Solution {
public:
    void DFS(vector<vector<char>> &grid, int i, int j, int m, int n)
    {
        if(i<0 || i>=m || j<0 || j>=n)
            return;
        if(grid[i][j]=='1')
        {
            grid[i][j]='2';
            DFS(grid,i-1,j,m,n);
            DFS(grid,i+1,j,m,n);
            DFS(grid,i,j+1,m,n);
            DFS(grid,i,j-1,m,n);
        }
        else return;
        
        
    }
    int numIslands(vector<vector<char>> &grid) {
        int m = grid.size();
        if(m==0)
            return 0;
        int n = grid[0].size();
        int result=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j] == '1')
                {
                    DFS(grid,i-1,j,m,n);
                    DFS(grid,i+1,j,m,n);
                    DFS(grid,i,j+1,m,n);
                    DFS(grid,i,j-1,m,n);
                    result++;
                }

            }
        }
        return result;
    }
};