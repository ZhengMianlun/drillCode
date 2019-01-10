class Solution {
public:
    int mySqrt(int x) {
        int result = 0;
        int begin =1, end =x;
        if(x<2)
            return x;
        while(begin<=end)
        {
            int inter = begin+ (end-begin)/2;
            if(inter == x/inter)
                return inter;
            else if(x/inter>inter)
            {
                begin = inter+1;
                result = inter;
            }
            else
                end = inter-1;
        }
        return result;
    }
};
