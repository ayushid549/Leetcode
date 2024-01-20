class Solution {
public:
   vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        vector<int> vec;
        unordered_map<int,int> arr;
        for(int i=nums2.size()-1;i>=0;i--)
        {
            if(st.empty())
            {
                arr[nums2[i]]=-1;
                st.push(nums2[i]);
            }
            else if(st.top()>nums2[i])
            {
                arr[nums2[i]]=st.top();
                st.push(nums2[i]);
            }
            else if(st.top()<nums2[i])
            {
                st.pop();
                i++;
            }
        }
        for(int i=0;i<nums1.size();i++)
        {
            vec.push_back(arr[nums1[i]]);
        }
      return vec;
   }
};