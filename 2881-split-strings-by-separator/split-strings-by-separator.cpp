class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator)
    {
        vector<string> ans;
        
        for(int i=0;i<words.size();i++)
        {
            string s = words[i];
            string temp = "";
            for(auto it : s)
            {
                if(it==separator && temp!="")
                {
                    ans.push_back(temp);
                    temp="";
                }
                if(it!=separator)
                {
                    temp+=it;
                }
            }
            if(temp!="")
            ans.push_back(temp);
        }
        return ans;
    }
};