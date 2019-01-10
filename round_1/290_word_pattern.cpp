class Solution {
public:
    bool wordPattern(string pattern, string str) {
        istringstream ss(str);
        string s;
        vector<string> res;
        while (ss >> s)
            res.push_back(s);
        
        if(res.size()!=pattern.length())
            return false;
        
        map<string,char> data1;
        map<char,string> data2;
        for(int i=0; i<pattern.length();i++)
        {
            if(!data1.count(res[i]))
                data1[res[i]] = pattern[i];
            if(!data2.count(pattern[i]))
                data2[pattern[i]] = res[i];
            if(data1[res[i]]!=pattern[i])
                    return false;
            if(data2[pattern[i]]!=res[i])
                    return false;
        }
        return true;
    }
};
