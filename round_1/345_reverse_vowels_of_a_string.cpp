class Solution {
public:
    string reverseVowels(string s) {
        for(int i=0, j=s.length()-1; i<j;)
        {
            if(isVowel(s[i])&&isVowel(s[j]))
            {
                swap(s[i],s[j]);
                i++;
                j--;
            }
            else if(isVowel(s[i])&&!isVowel(s[j]))
                j--;
            else if(!isVowel(s[i])&&isVowel(s[j]))
                i++;
            else
            {
                i++;
                j--;
            }
        }
        return s;
    }
private:
    bool isVowel(char c)
    {
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            return true;
        else if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            return true;
        else 
            return false;
    }
};
