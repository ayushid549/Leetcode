class Solution {
public:
    void rotate(vector<int>& nums, int k)
    {
       int s = nums.size();
       vector<int> ans(s);

       for(int i=0;i<s;i++)
       {
           int ind = (i+k)%s;
           ans[ind] = nums[i];
       }

       nums = ans;
    }
};