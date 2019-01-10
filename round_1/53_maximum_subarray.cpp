class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsub = nums[0];
        int sum = 0;
        for(int i = 0; i< nums.size();i++)
        {
            sum = max(sum+nums[i],nums[i]);
            maxsub = max(maxsub, sum);
        }
        return maxsub;
    }
};
