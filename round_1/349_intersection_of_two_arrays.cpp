class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        for(int i=0, j=0;i<nums1.size()&&j<nums2.size();)
        {
            if(nums1[i]==nums2[j])
            {
                if(find(result.begin(), result.end(), nums1[i]) == result.end())
                    result.push_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i]>nums2[j])
                j++;
            else
                i++;
        }
        return result;
    }
};
