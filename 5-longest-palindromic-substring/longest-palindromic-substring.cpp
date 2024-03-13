class Solution {
public:
    string longestPalindrome(string s)
    {
        int n = s.size();
        if(n==0)
           return " ";
        
        vector<vector<bool>> dp(n,vector<bool>(n,false));
        int maxLen = 1;
        int start = 0;

        //Single Character
        for(int i=0;i<n;i++)
        {
            dp[i][i] = true;
        }
        
        //String having length 2

        for(int i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1])
            {
                dp[i][i+1] = true;
                maxLen = 2;
                start = i;
            }
        }

        //String having lenght greater then 2
        
        for(int len=3;len<=n;len++)
        {
            for(int i=0;i<=n-len;i++)
            {
                int j = i+len-1;
                if(s[i] == s[j] && dp[i+1][j-1])
                {
                    dp[i][j] = true;
                    if(len > maxLen)
                    {
                        maxLen = len;
                        start = i;
                    }
                }
            }
        }
        return s.substr(start,maxLen);
    }
};