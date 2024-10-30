class Solution {
public:
    bool isPalindrome(int x) {
        int rem=0, cpy = x;
        string y="";
        if(x<0)
            return false;
        else if(x == 0)
            return true;
        while(x!=0)
        {
            rem = x%10;
            y += to_string(rem);
            x /= 10;
        }
        //cout<<y<<endl;
        //if(strcmp(y,to_string(x)) == 0)
        if(y == to_string(cpy))
            return true;
        else
            return false;
    }
};