class Solution
{
public:
    
    vector<vector<int>> solve(vector<int>nums,vector<vector<int>>&ans,int ind)
    {
        if(ind>=nums.size())
        {
            ans.push_back(nums);
            return ans;
        }

        for(int i = ind ; i<nums.size() ; i++)
        {
            swap(nums[ind],nums[i]);
            solve(nums,ans,ind+1);
            swap(nums[ind],nums[i]);
        }
        return ans;
    }

    vector<vector<int>> permute(vector<int>& nums)
    {
        vector<vector<int>> ans;
        int ind = 0;
        solve(nums,ans,ind);
        return ans;
    }
};