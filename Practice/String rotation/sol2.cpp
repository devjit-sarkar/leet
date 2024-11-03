class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!= goal.size())
            return false;
        string s2 = s+s;
        return s2.find(goal) != string::npos;
    }
};