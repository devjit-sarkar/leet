class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j = 0;
        if(s.size() > t.size())
            return false;
        for(int i=0; i<t.size(); i++)
        {
            //check whether t[i] matches s[j]
            if(t[i] == s[j])
            {
                j++;
            }
            else if(j == s.size())
            {
                return true;
            }
        }
        if(j == s.size())
        {
            return true;
        }
        else
            return false;
    }
};