map的内部结构是红黑树，因此所有元素插入到map里面都会排好序，而且搜索过程为平衡二叉树搜索，因此时间复杂度为O(logN)
unordered_map按照哈希表排列，根据key快速索引到value。哈希表查找效率高，但是空间消耗非常大。

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> input;
        for (int i=0;i<nums.size();i++)
        {
            input[nums[i]] = i;
        }
        vector<int> output;
        for (int i=0;i<nums.size();i++)
        {
            auto index = input.find(target-nums[i]);//编译器自行判断返回数据类型
            if(index!=input.end() && index->second>i)//find函数返回查找到元素的iterator，如未查找到，返回end()
            {
                output.push_back(i);
                output.push_back(index->second);
                break;
            }
        }
        return output;
    }
};
