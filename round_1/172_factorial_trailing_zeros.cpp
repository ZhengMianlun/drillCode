class Solution {
public:
    int trailingZeroes(int n) {
        int temp = n;
        int count = 0;
        while(temp>1)
        {
            count = count + temp/5;
            temp = temp/5;
        }
        return count;
    }
};
