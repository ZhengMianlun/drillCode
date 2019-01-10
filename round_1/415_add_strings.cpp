class Solution {
public:
    string addStrings(string num1, string num2) {
        string result;
        int i=num1.length()-1, j=num2.length()-1;
        int flag = 0;
        while(i>=0&&j>=0)
        {
            int sum = num1[i]-'0'+num2[j]-'0' +flag;
            flag = sum/10;
            result.push_back(sum%10+'0');
            i--;
            j--;
        }
        while(i>=0)
        {
            int sum = num1[i]-'0'+flag;
            flag = sum/10;
            result.push_back(sum%10+'0');
            i--;
        }
        while(j>=0)
        {
            int sum = num2[j]-'0'+flag;
            flag = sum/10;
            result.push_back(sum%10+'0');
            j--;
        }
        if(flag)
            result.push_back(flag+'0');
        reverse(result.begin(),result.end());
        return result;
    }
};
