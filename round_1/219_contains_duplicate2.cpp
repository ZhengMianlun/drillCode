class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,int> data;
        for(int i=0; i<nums.size();i++)
        {
            if(data.count(nums[i]))
            {
                if(i-data[nums[i]]<=k)
                    return true;
            }
            data[nums[i]] = i;
        }
        return false;
    }
};
