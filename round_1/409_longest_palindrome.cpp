class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int> data;
        for(int i=0;i<s.length();i++)
        {
            if(!data.count(s[i]))
                data[s[i]] = 1;
            else
                data[s[i]]++;
        }
        int flag = 0;
        int len = 0;
        for(auto i= data.begin();i!=data.end();i++)
        {
            if(i->second%2 == 1)
                flag = 1;
            len = len+i->second/2;
        } 
        return len*2+flag;
    }
};
