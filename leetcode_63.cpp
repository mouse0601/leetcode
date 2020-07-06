class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        if(obstacleGrid[0][0] == 1)
        `  return 0;
       int n = obstacleGrid.size(), m = obstacleGrid.at(0).size();
        for(int i = 0;i < n;i++)
        {
            for(int j = 0;j < m;j++)
            {
                if(obstacleGrid[i][j] == 1)
                {
                    obstacleGrid[i][j] = 0;
                    continue;
                }
                obstacleGrid[0][0] = 1;
                if( i == 0 && j > 0 )
                    obstacleGrid[0][j] += obstacleGrid[0][j-1];
                else if(i > 0 && j == 0 )
                    obstacleGrid[i][0] += obstacleGrid[i-1][0];
                else if(i > 0 && j > 0 )
                    obstacleGrid[i][j] = obstacleGrid[i-1][j] + obstacleGrid[i][j-1];
                
            }
        }
        return obstacleGrid[n - 1][m - 1];
    }
};
