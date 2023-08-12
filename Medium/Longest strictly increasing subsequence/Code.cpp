class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
        int maxi = 1;
        vector<int> dp;
        for (int i = 0; i < n; i++)
        {
            auto it = lower_bound(dp.begin(), dp.end(), a[i]);
            if (it == dp.end())
            {
                dp.emplace_back(a[i]);
            }
            else
            {
                int ind = it - dp.begin();
                dp.at(ind) = a[i];
            }
            maxi = max(maxi, (int)dp.size());
        }
        return maxi;
    }
};
