class Solution {
public:
    string countAndSay(int n) {
        string result;
        if(n == 1)
            return to_string(1);
        else
        {
            string pre = countAndSay(n-1);
            int num = 0;
            string flag;
            flag[0] = pre[0];
            for(int i=0;i<pre.length();i++)
            {
                if(flag[0] == pre[i])
                    num++;
                else
                {
                    result = result + to_string(num) + flag[0];
                    flag[0] = pre[i];
                    num = 1;
                }
            }
            result = result + to_string(num) + flag[0];
            return result;
        }
        
    }
};
