class Solution {
public:
    int strStr(string haystack, string needle) {
        int lh = haystack.length();
        int ln = needle.length();
        int index = -1;
        if(lh<ln)
            return index;
        if(ln==0)
            return 0;
        for (int i=0; i<lh-ln+1;i++)
        {
            if(haystack[i] == needle[0])
            {
                index = 0;
                for (int j=1;j<ln;j++)
                {
                    if(index == -1)
                        break;
                    if(haystack[i+j]!=needle[j])
                        index = -1;
                }
            }
            if(index == 0)
                return i;
        }
        return index;
    }
};
