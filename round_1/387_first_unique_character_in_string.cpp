class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int> data;
        for(int i=0;i<s.length();i++)
        {
            if(!data.count(s[i]))
                data[s[i]] = 1;
            else
                data[s[i]] ++;
        }
        for(int i=0;i<s.length();i++)
        {
            if(data[s[i]]==1)
                    return i;
        }
        return -1;
    }
};
