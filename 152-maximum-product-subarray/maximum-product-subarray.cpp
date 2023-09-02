class Solution {
public:
    int maxProduct(vector<int>& nums)
    {
        int prefix = 1;
        int suffix = 1;
        int ans = INT_MIN;

        int s =  nums.size();

        for(int i=0;i<s;i++)
        {
            if(prefix == 0)
            prefix=1;
            if(suffix == 0)
            suffix=1;

            prefix*=nums[i];
            suffix*=nums[s-i-1];

            ans = max(ans,max(prefix,suffix));
        }
        return ans;
    }
};