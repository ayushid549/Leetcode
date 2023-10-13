class Solution {
public:

     int mincost(int i,vector<int> &cost,vector<int>&dp)
     {
         if(i>=cost.size())
            return 0;

          if(dp[i]!=-1)
             return dp[i];

          return dp[i] = min(cost[i]+mincost(i+1,cost,dp),cost[i]+mincost(i+2,   cost,dp));
    
     }

    int minCostClimbingStairs(vector<int>& cost)
    {
        int n = cost.size();
        vector<int> dp(n+1,-1);
        return min(mincost(0,cost,dp),mincost(1,cost,dp));    
    }
};