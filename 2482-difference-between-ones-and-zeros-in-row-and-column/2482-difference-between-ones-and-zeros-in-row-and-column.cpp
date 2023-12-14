class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m = grid.size(),n = grid[0].size();
        vector<int> oner(m,0), onec(n,0);
        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                oner[i] += grid[i][j];
                onec[j] += grid[i][j];
            }
        }
        //vector<vector<int>> diff(m,vector<int>(n));
        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                grid[i][j] = oner[i] + onec[j] -(m-oner[i]) - (n-onec[j]);
            }
        }
        return grid;
    }
};