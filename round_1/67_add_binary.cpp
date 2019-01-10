class Solution {
public:
    string addBinary(string a, string b) {
        if(a.empty())
            return b;
        if(b.empty())
            return a;
        string result;
        int flag = 0;
        int i = a.length()-1, j = b.length()-1;
        while(i>=0||j>=0||flag>0)
        {
            int valueA = i < 0 ? 0 : a[i--] - '0';
            int valueB = j < 0 ? 0 : b[j--] - '0';
            int sum = valueA + valueB + flag;
            result.insert(result.begin(), (sum % 2) + '0');
            flag = sum / 2;
        }
        return result;
    }
};
