class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int, int> mp1, mp2;
        for (int i = 0; i < matches.size(); i++) {
            mp1[matches[i][0]]++;
        }
        for (int i = 0; i < matches.size(); i++) {
            mp2[matches[i][1]]++;
        }

        vector<vector<int>> ans;
        vector<int> win, loss;

        for (auto it : mp1) {
            if (mp2.find(it.first) == mp2.end()) {
                win.push_back(it.first);
            }
        }
        for (auto it : mp2) {
            if (it.second == 1) {
                loss.push_back(it.first);
            }
        }
        ans.push_back(win);
        ans.push_back(loss);
        return ans;
    }
};