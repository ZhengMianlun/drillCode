用递归会超时 
用动态规划

递归：从前往后，超时
class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        return money(nums, 0, nums.size()-1);
    }
private:
    int money(vector<int>& nums, int i, int j)
    {
        if(i == j)
            return nums[j];
        else if((j-i)==1)
            return max(nums[i],nums[j]);
        else if((j-i)==2)
            return max(nums[i]+nums[j],nums[i+1]);
        else 
            return max(nums[i]+money(nums,i+2,j),nums[i+1]+money(nums,i+3,j));
    }
};

动态规划：
class Solution {
public:
    int rob(vector<int>& nums) {
        int rob = 0, notrob = 0;
        for(int i=0; i<nums.size();i++)
        {
            int prerob = rob, prenotrob = notrob;
            rob = prenotrob + nums[i];
            notrob = max(prerob, prenotrob);
        }
        return max(rob, notrob);
    }
};
