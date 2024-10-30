class Solution {
public:
    bool isPalindrome(int x) {
        string cpy = to_string(x);
        for(int i=0; i<cpy.size(); i++)
        {
            if(cpy[i] != cpy[cpy.size() - i-1])
                return false;
        }
        return true;
    }
};