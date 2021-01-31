int dp[501][501];
class Solution {
	public:
		int LongestRepeatingSubsequence(string str)
		{
		    memset(dp,-1,sizeof(dp));
		    int n=str.size();
		    for(int i=0;i<=n;i++)
		    {
		        for(int j=0;j<=n;j++)
		        {
		            if(i==0||j==0)
		            {
		                dp[i][j]=0;
		            }
		        }
		    }
		    for(int i=1;i<=n;i++)
		    {
		        for(int j=1;j<=n;j++)
		        {
		            if(str[i-1]==str[j-1]&&i!=j)
		            {
		                dp[i][j]=1+dp[i-1][j-1];
		            }
		            else
		            {
		                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		            }
		        }
		    }
		    return dp[n][n];
		    
		}

};
