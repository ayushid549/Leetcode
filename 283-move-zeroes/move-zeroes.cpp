class Solution {
public:
    void moveZeroes(vector<int>& nums)
    {
        int s = nums.size();
        for(int i=0;i<s-1;i++)
        {
            for(int j=i+1;j<s;j++)
            {
                if(nums[i]==0 && nums[j]!=0)
                {
                    swap(nums[i],nums[j]);
                }
            }
        }     
    }
};