class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if(nums.size()<2)
            return false;
        sort(nums.begin(),nums.end());
        int flag = nums[0];
        for(int i=1; i<nums.size(); i++)
        {
            if(flag == nums[i])
                return true;
            flag = nums[i];
        }
        return false;
    }
};
