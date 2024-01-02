class Solution {
public:
    int maxOperations(vector<int>& nums, int k)
    {
        sort(nums.begin(),nums.end());
        int i=0,j=nums.size()-1;
        
        int ans = 0;

        while(i<j)
        {
            int sum = nums[i]+nums[j];
            if(sum==k)
            {
                ans++;
                i++;
                j--;
            }
            else if(sum<k)
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return ans;
    }
};