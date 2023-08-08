class Solution {
public:
    int firstMissingPositive(vector<int>& nums)
    {
        int n = nums.size();
        int j = n - 1;
        for (int i = n - 1; i >= 0; i--)
        {
           if (nums[i] <= 0)
           {
              swap(nums[i], nums[j]);
              j--;
           }
        }
        for (int i = 0; i <= j; i++)
        {
           if (abs(nums[i]) <= j + 1)
           {
              nums[abs(nums[i]) - 1] = -abs(nums[abs(nums[i]) - 1]);
           }
        }
        for (int i = 0; i <= j; i++)
        {
           if (nums[i] > 0)
           {
            return i + 1;
           }
        }
        return j + 2;     
    }
};