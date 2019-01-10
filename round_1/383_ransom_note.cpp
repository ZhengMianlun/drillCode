class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        sort(ransomNote.begin(),ransomNote.end());
        sort(magazine.begin(),magazine.end());
        int j = 0;
       // cout<<magazine<<endl;
        for(int i=0; i<ransomNote.length();)
        {
           // cout<<ransomNote[i]<<magazine[j]<<endl;
            if(j>=magazine.length())
                return false;
            if(ransomNote[i]==magazine[j])
            {
                i++;
                j++;
            }
            else 
                j++;
        }
        return true;
    }
};
