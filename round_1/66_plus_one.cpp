class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> result;
        if(digits[digits.size()-1]!=9)
        {
            result = digits;
            result[result.size()-1]++;
            return result;
        }
        else
        {
            int flag = 1;
            result.push_back(0);
            for (int i=digits.size()-2;i>=0;i--)
            {
                if(digits[i]==9&&flag==1)
                {
                    result.push_back(0);
                    flag = 1;
                }
                else
                {
                    result.push_back(digits[i]+flag);
                    flag = 0;
                }
            }
            if(flag==1)
                result.push_back(1);
            reverse(result.begin(),result.end());
        }
        return result;
    }
};
