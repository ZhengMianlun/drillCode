class Solution {
public:
    int countSegments(string s) {
        if(s.size()==0)
            return 0;
        int flag = 0;
        int num = 0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=' ')
            {
                if(flag==0)
                {
                    num++;
                    flag = 1;
                }
            }
            else
                flag = 0;
        }
         return num;
    }
};
