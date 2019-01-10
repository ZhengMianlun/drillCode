class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long i=LONG_MIN, j=LONG_MIN, k=LONG_MIN;
        for(int m=0; m<nums.size(); m++)
        {
            if(nums[m]==k||nums[m]==j||nums[m]==i)
                continue;
            if(nums[m]>k)
            {
                i = j;
                j = k;
                k = nums[m];
            }
            else if(nums[m]>j)
            {
                i = j;
                j = nums[m];
            }
            else if(nums[m]>i)
                i = nums[m];
        }
                    
        if(i==LONG_MIN)
            return k;
        else
            return i;
    }
};
