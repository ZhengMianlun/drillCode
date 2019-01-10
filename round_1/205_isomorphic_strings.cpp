class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length())
            return false;
        if(s.length()==0)
            return true;
        size_t snum[128]={}, tnum[128]={};
        for(int i=0; i<s.length();i++)
        {
            if(snum[s[i]]!=tnum[t[i]])
                return false;
            snum[s[i]] = tnum[t[i]] = i+1;
        }
        return true;
    }
};
