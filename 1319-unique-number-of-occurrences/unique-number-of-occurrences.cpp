class Solution
{
public:
    bool uniqueOccurrences(vector<int>& arr)
    {
        map<int,int> mp;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        vector<int> count;
        bool ans = true;
        for(auto it : mp)
        {
            count.push_back(it.second);
        }
        sort(count.begin(),count.end());
        for(int i=0;i<count.size()-1;i++)
        {
            if(count[i]==count[i+1])
            {
                ans = false;
                break;
            }
        }
        if(ans)
        return true;
        else
        return false;  
    }
};