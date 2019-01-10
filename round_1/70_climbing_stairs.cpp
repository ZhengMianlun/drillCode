class Solution {
public:
    int climbStairs(int n) {
        int f1 = 0;
        int f2 = 1;
        int result = 0;
        for(int i= 0;i<n;i++)
        {
            result = f1+f2;
            f1 = f2;
            f2 = result;
        }
        return result;
    }
};
