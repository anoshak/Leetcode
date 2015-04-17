class Solution{
    public:
    int minPathSum(vector<vector<int> > &grid)
    {
        int m = grid.size();
        int n = grid[0].size();
        int *arr = new int[n];
        arr[0] = grid[0][0];
        for(int i=1;i<n;i++)
         arr[i] = arr[i-1] + grid[0][i];
        for(int i=1;i<m;i++)
        {
            arr[0]+=grid[i][0];
            for(int j=1;j<n;j++)
                arr[j]=min(arr[j-1],arr[j]) + grid[i][j];
        }
        return arr[n-1];
    }
};


class Solution2 {
public:
    int minPathSum2(vector<vector<int> > &grid, int x, int y, int** arr)
    {
        if(x<0 || y<0)
            return INT_MAX;
        if(x==0 && y==0)
            return grid[x][y];
        if(arr[x][y]!=-1)
            return arr[x][y];
        int val1 = minPathSum2(grid,x-1,y,arr);
        int val2 = minPathSum2(grid,x,y-1,arr);
        arr[x][y] = min(val1,val2) + grid[x][y];
        return arr[x][y];
        
    }
    int minPathSum(vector<vector<int> > &grid) {
        int m = grid.size();
        int n = grid[0].size();
        int** arr = new int*[m];
        for(int i=0;i<m;i++)
            arr[i] = new int[n];
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                arr[i][j]= -1;
        return minPathSum2(grid,m-1,n-1,arr);
    }
};