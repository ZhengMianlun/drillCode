class Solution {
public:
    int addDigits(int num) {
        while(num>9)
            num = add(num);
        return num;
    }
private:
    int add(int n)
    {
        int temp = 0;
        while(n>=1)
        {
            temp = temp+n%10;
            n=n/10;
        }
        return temp;
    }
};
