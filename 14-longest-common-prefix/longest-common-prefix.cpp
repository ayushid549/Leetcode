class Solution 
{
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        int s = strs.size();
        
        sort(strs.begin(),strs.end());
        
        string ans="";
        string ss = strs[0];
        string ls = strs[s-1];
        
        for(int i=0;i<ss.size();i++)
        {
            if(ss[i]==ls[i])
            {
                ans+=ss[i];
            }
            else
            {
                break;
            }
        }
        
        return ans;
    }
};