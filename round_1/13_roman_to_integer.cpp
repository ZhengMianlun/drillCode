class Solution {
public:
    int romanToInt(string s) {
        int result = 0;
        for(int i=0; i<s.length();i++)
        {
            if(s[i] == 'I')
            {
                if(s[i+1] == 'V'||s[i+1] == 'X')
                    result = result - 1;
                else 
                    result = result + 1;
            }
            if(s[i] == 'V')
                result = result + 5;
            if(s[i] == 'X')
            {
                if(s[i+1] == 'L'||s[i+1] == 'C')
                    result = result - 10;
                else 
                    result = result + 10;
            }
            if(s[i] == 'L')
                result = result + 50;
            if(s[i] == 'C')
            {
                if(s[i+1] == 'D'||s[i+1] == 'M')
                    result = result - 100;
                else 
                    result = result + 100;
            }
            if(s[i] == 'D')
                result = result + 500;
            if(s[i] == 'M')
                result = result + 1000;
        }
        return result;
    }
};
