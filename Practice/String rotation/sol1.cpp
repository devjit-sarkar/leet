class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.size();
        int m = goal.size();
        string part="", full;
        int left=0;
        if(n != m)
            return false;
        for(int i=0, j=0; i<n; i++)
        {
            if(s[i] != goal[j])
            {
                left++;
            }
            else
            {
                j++;
            }
        }
        part = s.substr(0, left);
        full = s.substr(left, n)+part;
        if(goal == full)
            return true;
        else
            return false;
    }
};