class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int i = 0;
        string result = "";
        int flag = 0;
        while(true)
        {
            if(strs.size()==1)
            {
                result = strs[0];
                return result;
            }
           for (int j=1;j<strs.size();j++)
           {
               if(strs[0][i] == strs[j][i])
               {
                   flag = 1;
                   continue;
               }
               else
               {
                   flag = 0;
                   break;
               }
           }
            if(flag == 1)
                result.push_back(strs[0][i]);
            else 
                break;
           i++;
        }
        return result;
    }
};
