class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        // int flag = 0;
        long long gcdSize = gcd(str1.size(), str2.size());
        string gcdString = str1.substr(0,gcdSize);
        cout<<"gcd string: "<<gcdString<<endl;

        for(long long i=0; i<str1.size(); i += gcdSize)
        {
            if(str1.substr(i,gcdSize) != gcdString)
            {
                // cout<<i<<" "<<i+gcdSize<<" str1: "<<str1.substr(i,gcdSize)<<endl;
                // cout<<str1.substr(2,4)<<endl;
                return "";
            }
        }
        for(long long i=0; i<str2.size(); i += gcdSize)
        {
            if(str2.substr(i,gcdSize) != gcdString)
            {
                // cout<<"str2: "<<str2.substr(i,i+gcdSize)<<endl;
                return "";
            }
        }
        return gcdString;
    }
    long long gcd(int a, int b)
    {
        if(b == 0)
            return a;
        else
            return gcd(b,a%b);
    }
};