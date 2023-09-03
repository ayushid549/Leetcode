class Solution {
public:

    void solve(vector<int>nums,int ind,vector<int>v,vector<vector<int>>&ans)
    {
        if(ind >= nums.size())
        {
            ans.push_back(v);
            return;
        }
        solve(nums,ind+1,v,ans);
        int ele = nums[ind];
        v.push_back(ele);
        solve(nums,ind+1,v,ans);
    }

    vector<vector<int>> subsets(vector<int>& nums)
    {
        vector<vector<int>> ans;
        vector<int> v;
        int ind = 0;
        solve(nums,ind,v,ans); 
        return ans;      
    }
};