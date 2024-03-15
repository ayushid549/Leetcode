class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums)
    {
        int calc = 1;
        vector<int> ans;
        int zeroCount = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
            {
                zeroCount++;
                continue;
            }
            calc *= nums[i];
        }

        for (int i = 0; i < nums.size(); i++)
        {
            if (zeroCount > 1)
            {
                ans.push_back(0);
            }
            else if (zeroCount == 1)
            {
                if (nums[i] == 0)
                {
                    ans.push_back(calc);
                }
                else
                {
                    ans.push_back(0);
                }
            }
            else
            {
                ans.push_back(calc / nums[i]);
            }
        }
        return ans;
    }
};