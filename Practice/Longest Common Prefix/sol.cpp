class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size(), check=0, maxLength=0, minLength=200;
        string ref, prefix="";
        //find string with the longest length
        for(int i=0; i<n; i++)
        {
            if(maxLength < strs[i].size())
            {
                maxLength = strs[i].size();
                ref = strs[i];
            }
            else if(minLength > strs[i].size())
            {
                minLength = strs[i].size();
            }
        }
        //cout<<ref<<" "<<maxLength<<" "<<minLength<<endl;
        //cout<<strs[0][0]<<endl;
        if(n == 1)
            return strs[0];
        for(int j=0; j<minLength; j++)
        {
            for(int i=0; i<n+1; i++)
            {
                if(i == n)
                {
                    prefix += ref[check];
                    check++;
                }
                else if(strs[i][check] != ref[check])
                {
                    //cout<<strs[i][check]<<" "<<ref[check]<<endl;
                    return prefix;
                
                }
                else if(strs[i].empty())
                    return ""; 
            }   
        } 
        return prefix;
    }
};