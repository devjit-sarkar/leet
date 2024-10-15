class Solution {
public:
    long long minimumSteps(string s) {
        long long zero_count = 0, final_count = 0;
        for(int i=s.size()-1; i>=0; i--)
        {
            if(s[i] == '0'){
                zero_count++;
                cout<<zero_count<<endl;
            }
            else{
                final_count += zero_count;
                cout<<"in final "<<final_count<<endl;
                // zero_count = 0;
            }
        }
        return final_count;
    }
};