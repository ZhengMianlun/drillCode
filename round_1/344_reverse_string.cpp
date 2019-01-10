class Solution {
public:
    string reverseString(string s) {
        string result;
        for(int i=s.length();i>0;i--)
        {
            result.push_back(s[i-1]);
        }
        return result;
    }
};
