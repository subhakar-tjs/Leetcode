class Solution {
public:
   
    int helper(int m, int n)
    {
        int dp[m][n];
        memset(dp,0,sizeof(dp));
            for(int i=0;i<m;i++)
            {
                for(int j=0;j<n;j++)
                {
                    if(i==0||j==0)
                    dp[i][j]=1;
                    else 
                   dp[i][j]=dp[i][j-1]+dp[i-1][j];
}
            }
        return dp[m-1][n-1];
           
        }
    int uniquePaths(int m, int n) {
        
        return helper(m,n);
    }
};