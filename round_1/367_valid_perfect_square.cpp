class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num<=0)
            return false;
        if(num<2)
            return true;
        int i = 2;
        while(i*i!=num)
        {
            if(i>num/i)
                return false;
            else 
                i++;
        }
        return true; 
    }
};
