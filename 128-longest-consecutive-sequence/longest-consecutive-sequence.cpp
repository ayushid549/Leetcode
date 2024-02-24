class Solution {
public:
    int longestConsecutive(vector<int>& nums)
    {
        unordered_set<int> hashset;
       
        for(auto num : nums)
        {
            hashset.insert(num);
        } 

        int longestStreak = 0;

        for(auto num : nums)
        {
            if(!hashset.count(num-1))
            {
                int currentNum = num;
                int currentStreak = 1;
                while(hashset.count(currentNum+1))
                {
                    currentNum +=1;
                    currentStreak +=1;
                }

                longestStreak = max(longestStreak,currentStreak);
            }
        }   
        return longestStreak;
    }
};