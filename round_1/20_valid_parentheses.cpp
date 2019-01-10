class Solution {
public:
    bool isValid(string s) {
        vector<int> stack;
        stack.clear();
        for(int i = s.length(); i--; i>=0)
        {
            if(s[i] == ')')
                stack.push_back(1);
            if(s[i] == ']')
                stack.push_back(2);
            if(s[i] == '}')
                stack.push_back(3);
            if(s[i] == '(')
            {
                if(stack.empty())
                    return false;
                else if(stack.back() == 1)    
                    stack.pop_back();
                else if(stack.back() != 1)  
                    return false;
            }
            if(s[i] == '[')
            {
                if(stack.empty())
                    return false;
                else if(stack.back() == 2)    
                    stack.pop_back();
                else if(stack.back() != 2)  
                    return false;
            }
            if(s[i] == '{')
            {
                if(stack.empty())
                    return false;
                else if(stack.back() == 3)    
                    stack.pop_back();
                else if(stack.back() != 3)  
                    return false;
            }
        }
        if(stack.empty())
            return true;
        else
            return false;
    }
};

