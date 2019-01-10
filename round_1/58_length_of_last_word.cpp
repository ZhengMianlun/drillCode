class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.length()==0)
            return 0;
        int pre = 0;
        int len = 0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=' ')
            {
                len++;
                pre = len;
            }
            else
                len = 0;
        }
        if(pre!=0&&len==0)
            return pre;
        else
            return len;
    }
};
