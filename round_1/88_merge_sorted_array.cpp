class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int l1 = m-1;
        int l2 = n-1;
        int len = m+n-1;
        while(l1>=0 && l2>=0)
        {
            if(nums1[l1]>=nums2[l2])
            {
                nums1[len] = nums1[l1];
                l1--;
            }
            else
            {
                nums1[len] = nums2[l2];
                l2--;
            }
            len--;
        }
        while(l2>=0)
        {
            nums1[len] = nums2[l2];
            l2--;
            len--;
        }
    }
};
