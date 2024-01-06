
class Solution
{
  public:
    int minOperation(int n)
    {
        vector<int> dp(n + 1, INT_MAX); // Create a DP array to store minimum operations for each number from 0 to n
        
        dp[0] = 0; // Base case: 0 operations required to reach 0
        
        for (int i = 1; i <= n; ++i) {
            if (i % 2 == 0) {
                dp[i] = min(dp[i], dp[i / 2] + 1); // If 'i' is even, we can reduce it by halving it
            }
            dp[i] = min(dp[i], dp[i - 1] + 1); // We can always decrement by 1
            
    
            // Note: This approach assumes that reducing 'i' by 1 is always a valid operation.
        }
        
        return dp[n];
    }
};
