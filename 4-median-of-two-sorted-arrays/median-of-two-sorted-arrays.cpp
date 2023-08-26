class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
    {
        vector<int> v;

        for(auto it : nums1)
        v.push_back(it);

        for(auto it : nums2)
        v.push_back(it);

        sort(v.begin(),v.end());

        int s=0,e=v.size()-1;
        int mid = s+(e-s)/2;

        if(v.size()%2==0)
        {
            double ans = ceil(v[mid] + v[mid+1]) / 2;
            return ans;     
        }
        else
        {
            return double(v[mid]);
        } 
    }
};