class Solution {
public:
    int maxFrequencyElements(vector<int>& nums)
    {
        unordered_map<int,int> mp;
        int max_frq = 0;

        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
            max_frq = max(max_frq,mp[nums[i]]);
        }

        int count = 0;
        for(auto it : mp)
        {
            if(it.second == max_frq)
            {
                count++;
            }
        }
        return count*max_frq;    
    }
};