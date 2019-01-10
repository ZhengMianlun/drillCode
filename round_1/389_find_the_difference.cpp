class Solution {
public:
    char findTheDifference(string s, string t) {
        int ss=0, tt=0;
        for(int i=0;i<s.length();i++)
            ss+=s[i];
        for(int i=0;i<t.length();i++)
            tt+=t[i];
        char result = tt-ss;
        return result;
    }
};
