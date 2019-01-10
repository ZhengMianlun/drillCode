class Solution {
public:
    string convertToTitle(int n) {
        string result;
        int temp = (n-1)%26;
        result.push_back(temp+'A');
        temp = (n-1)/26;
        while(temp>=1)
        {
            int s = (temp-1)%26;
            result.push_back(s+'A');
            temp = (temp-1)/26;
        }
        reverse(result.begin(),result.end());
        return result;
    }
};
