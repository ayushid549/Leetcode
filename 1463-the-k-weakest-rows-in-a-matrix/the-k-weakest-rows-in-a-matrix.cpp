class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k)
    {
        vector<int> ans;
        vector<pair<int,int>> v;
       
        for(int i=0;i<mat.size();i++)
        {
            int count=0;
            for(int j=0;j<mat[0].size();j++)
            {
                if(mat[i][j])
                   count++;
            }
            v.push_back({count,i});
        }
        
        sort(v.begin(),v.end());

        for(auto it : v)
        {
            if(k==0)
               break;
            ans.push_back(it.second);
            k--;
        }
        return ans;
    }
};