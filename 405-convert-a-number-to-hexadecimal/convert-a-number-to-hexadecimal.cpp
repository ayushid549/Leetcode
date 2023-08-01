class Solution {
public:
    string toHex(unsigned int num)
    {
        unordered_map<int,string> val { {0,"0"},{1,"1"}, {2,"2"},{3,"3"}, {4,"4"},{5,"5"}, {6,"6"},{7,"7"}, {8,"8"},{9,"9"},  {10,"a"},{11,"b"},{12,"c"},{13,"d"},{14,"e"},{15,"f"}
 };

        if(num==0)
        return "0";

        string ans="";

        while(num>0)
        {
            int r = num%16;
            ans = val[r]+ans;
            num/=16;
        }
        return ans;
    }
};