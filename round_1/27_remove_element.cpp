class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int length = nums.size();
        if(length <1)
            return length;
        int pointer = 0;
        for (int i = 0; i<nums.size(); i++)
        {
            if(nums[i] == val)
                length --;
            else
            {
                nums[pointer] = nums[i];
                pointer++;
            }
        }
        return length;
        
    }
};
