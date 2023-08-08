class Solution {
public:
    int firstMissingPositive(vector<int>& nums)
    {
        int n = nums.size();
        vector<int> count(n+1,-1);
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0 && nums[i]<=n)
            {
                count[nums[i]]++;
            }
        }
        int i = 0;
        for(i=1;i<=n;i++)
        {
            if(count[i]==-1)
               break;
        }
        return i;
    }
};