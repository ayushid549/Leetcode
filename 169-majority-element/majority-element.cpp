class Solution
{
public:
    int majorityElement(vector<int>& nums)
    {
        int n=nums.size();
        int vote=0,leader=0;
        for(int i=0;i<n;i++)
        {
            if(vote==0)
                leader=nums[i];
            if(leader==nums[i])
                vote++;
            else
                vote--;
        }
        
        return leader;
    }
};