class Solution {
public:
    bool isHappy(int n) {
        int slow = n;
        int fast = n;
        do{
            slow = square(slow);
            fast = square(fast);
            fast = square(fast);
        }while(slow!=fast);
        if(slow ==1)
            return true;
        else
            return false;
    }
private:
    int square(int num)
    {
        int n = 0;
        int temp = num;
        while(temp>0)
        {
            n = n + (temp%10)*(temp%10);
            temp = temp/10;
        }
        return n;
    }
};
