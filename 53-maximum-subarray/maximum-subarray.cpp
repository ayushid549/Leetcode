class Solution 
{
public:
    int maxSubArray(vector<int>& nums) 
    {
      int s=nums.size();
      int sum=0;
      int ans=INT_MIN;
      for(int i=0;i<s;i++)
      {
          sum+=nums[i];

          if(sum>ans)
          {
              ans = sum;
          }

          if(sum<0)
             sum=0;
      }  

      return ans;
    }
};