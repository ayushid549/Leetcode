class Solution {
public:
    string frequencySort(string s)
    {
        map<char,int> mp;

        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }

        priority_queue<pair<int,char>> pq;

        for(auto it : mp){
            int x = it.second;
            char y = it.first;
            pq.push({x,y});
        }

        string ans="";

        while(pq.size()>0){
            int a = pq.top().first;
            char b = pq.top().second;
            for(int i=1;i<=a;i++){
                ans+=b;
            }
            pq.pop();
        }
        return ans;
    }
};