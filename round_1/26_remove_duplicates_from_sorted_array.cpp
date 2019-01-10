class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int length = nums.size();
        if(length <2)
            return length;
        int flag = nums[0];
        int pointer = 1;
        for (int i = 1; i<nums.size(); i++)
        {
            if(flag == nums[i])
                length --;
            else
            {
                nums[pointer] = nums[i];
                flag = nums[i];
                pointer++;
            }
        }
        return length;
    }
};
