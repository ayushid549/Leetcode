class Solution
{
public:
    
    bool valid(char ch)
    {
        if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z') || (ch>='0' && ch<='9'))  
           return true;

        return false;
    }

    char toLower(char ch)
    {
        if((ch>='a' && ch<='z') || (ch>='0' && ch<='9'))
           return ch;
        else
        {
            char temp = ch - 'A' + 'a';
            return temp;
        }
    }

    bool CheckPalindrome(string str)
    {
        int s = 0;
        int e = str.size()-1;
      
        while(s<=e)
        {
            if(str[s] != str[e])
               return false;
            else
               s++,e--;
        }
        return true;
    }
 
    bool isPalindrome(string s)
    {
        string temp = "";
        for(int j=0;j<s.length();j++)
        {
            if(valid(s[j]))
            {
                temp.push_back(s[j]);
            }
        }

        for(int i=0;i<temp.length();i++)
        {
            temp[i] = toLower(temp[i]);
        }

        return CheckPalindrome(temp);    
    }
};