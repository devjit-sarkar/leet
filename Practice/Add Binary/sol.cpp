class Solution {
public:
    string addBinary(string a, string b) {
        int m = a.size();
        int n = b.size();
        int sum = 0,carry = 0;
        string sol="";
        if(m>n)
        {
            while(m>n)
            {
                b = "0"+b;
                n++;
            }   
        }
        else if(n>m)
        {
            while(n>m)
            {
                a = "0"+a;
                m++;
            }   
        }
        for(int i=m-1; i>=0; i--)
        {
            int bitA = a[i] - '0';
            int bitB = b[i] - '0';
            
            sum = bitA^bitB^carry;
            carry = (bitA&bitB)|(bitA&carry)|(bitB&carry);
            sol = to_string(sum)+sol;
        }
        if(carry == 1)
        {
            sol = "1"+sol;
        }
        return sol;
    }
};