class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        // using namespace std;
        long long count;
        string gcd= "";
        if(str1+str2 != str2+str1)
        {
            return "";
        }

        if(str1.size() > str2.size())
        {
            count = str2.size();
        }
        else
        {
            count = str1.size();
        }

        //longest prefix of str1 and str2
        if(str1[0] != str2[0])
            return gcd;

        else
        {
            for(long long i=0; i<count; i++)
            {
                if(str1[i] == str2[i])
                {
                    gcd = gcd+str1[i];

                }
                else
                    break;
            }
        }
        cout<<"size of prefix is: "<<gcd.size()<<endl;
        for(long long i=gcd.size(); i>0; i--)
        {
            // int j=0;
            if(check_gcd(gcd.substr(0,i), str2)== 1)
            {
                // return gcd.substr(0,i);
                cout<<"working for str2"<<endl;
                if(check_gcd(gcd.substr(0,i), str1)==1)
                {
                    cout<<"working for str1"<<endl;
                    return gcd.substr(0,i);
                }
            }
        }
        return "pta nhi kya ho rha hai";
    }
    int check_gcd(string x, string str)
    {
        // string temp="";
        if(x.size() <= str.size())
        {
            cout<<x<<endl;
            string temp = x;
            // int mul = gcd(x.size(), str.size());
            int mul = str.size()/x.size();
            cout<<x.size()<<" "<<str.size()<<endl;
            for(int i=1; i<mul; i++)
            {
                x = x+temp;
            }
            if(x == str)
                return 1;
            cout<<x<<endl;
            // string temp = x;
            // if(x != str.substr(0,x.size()))
            //     break;
            // else if(x.size() == str.size())
            //     return 1;
            // else    
            // {
            //     x = x+temp;
            // }
        }
        return 0;
    }
    int gcd(int s1, int s2)
    {
        // if(s2 == 0)
        //     return s1;
        // gcd(s2, s1%s2);
        return s2 == 0 ? s1 : gcd(s2, s1 % s2);
    }
};