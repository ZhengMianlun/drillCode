class Solution {
public:
    int reverse(int x) {
        long divide = x;
        long result = 0;
        while(true)
        {
            if(divide == 0)
                break;
            else
            {
                int digit = divide%10;
                result = result*10+digit;  
                divide = divide/10;
            }
        }
        long test =result;
        for(int i=1;i<32;i++)
            test = test/2;
        if(test>=1||test<=-1)
            result = 0;
        return result;
    }
};
