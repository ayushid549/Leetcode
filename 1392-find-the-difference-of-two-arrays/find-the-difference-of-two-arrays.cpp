class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans;
        vector<int> v1, v2;
        set<int> s1, s2;

        for (int i = 0; i < nums1.size(); i++) {
            if (find(nums2.begin(), nums2.end(), nums1[i]) == nums2.end())
                s1.insert(nums1[i]);
        }

        for (int i = 0; i < nums2.size(); i++) {
            if (find(nums1.begin(), nums1.end(), nums2[i]) == nums1.end())
                s2.insert(nums2[i]);
        }

        for (auto it : s1)
            v1.push_back(it);

        for (auto it : s2)
            v2.push_back(it);

        ans.push_back(v1);
        ans.push_back(v2);

        return ans;
    }
};